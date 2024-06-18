/*
		Program to simulate Unix File System Checker(FSCK)
		Made By:
			Gaurav Rana (06)
			Ravindra Mishra(17)
			Varun Maini (29)
*/




#include<stdio.h>
#include<string.h>



#define DATA_BLOCK_SIZE 16
#define STRING_LENGTH 20
#define NAME_LENGTH 20
#define MAX_DIRECT_BLOCKS 3
#define NO_OF_INODES 10
#define NO_OF_DATA_BLOCKS MAX_DIRECT_BLOCKS*NO_OF_INODES
#define FREE_BLOCK_LIST_SIZE NO_OF_DATA_BLOCKS
#define FREE_INODE_LIST_SIZE NO_OF_INODES
#define MAX_FILES NO_OF_INODES


// WE WILL DEFINE THE VARIOUS TYPES OF INCONSISTENCIES THAT WE ARE 
// HANDLING IN OUR PROGRAM

#define	NO_INCONSISTENCY 0
#define LOST_DATA_BLOCK 1
#define INODE_LINK_NON_ZERO_BUT_DIRECTORY_ERASED 2
#define INODE_FREE_BUT_DIRECTORY_EXISTS 3
#define MISMATCH_IN_FREE_DATA_BLOCKS_COUNT 4
#define MISMATCH_IN_FREE_INODES_COUNT 5


int Inconsistency_Type=NO_INCONSISTENCY;

struct INODE
{
	char owner[STRING_LENGTH];
	char type[STRING_LENGTH];
	char access_perm[STRING_LENGTH];
	int link_count;
	int table_of_contents[MAX_DIRECT_BLOCKS];
	int file_size;
}Inode[NO_OF_INODES];

struct DIRECTORY
{
	char filename[NAME_LENGTH];
	int pointer_to_inode;
}Directory[MAX_FILES];

struct SUPER_BLOCK
{
		int no_of_free_blocks;
		int free_block_list[FREE_BLOCK_LIST_SIZE];
		int next_free_block;
		int inode_list_size;
		int no_of_free_inodes;
		int free_inodes_list[FREE_INODE_LIST_SIZE];
		int next_free_inode;
}Super_Block;

struct BLOCK
{
	char data[DATA_BLOCK_SIZE];
}Block[NO_OF_DATA_BLOCKS];

void Super_Block_Initialization()
{
	int i;
	Super_Block.no_of_free_blocks=NO_OF_DATA_BLOCKS;
	Super_Block.no_of_free_inodes=NO_OF_INODES;
	Super_Block.inode_list_size=NO_OF_INODES;

	// WE NOW INITIALIZE THE BUFFER AND INODE FREE LIST

	for(i=0;i<FREE_BLOCK_LIST_SIZE;i++)
	{
		Super_Block.free_block_list[i]=i;
	}

	for(i=0;i<FREE_INODE_LIST_SIZE;i++)
	{
		Super_Block.free_inodes_list[i]=i;
	}

	
	// NOW WE INITIALIZE THE POINTERS TO NEXT FREE INODE AND BLOCK
	Super_Block.next_free_inode=0;
	Super_Block.next_free_block=0;

}

void Initialize_Inodes(int inode_no)
{
	int i;
	strcpy(Inode[inode_no].owner,"");
	strcpy(Inode[inode_no].type,"");
	strcpy(Inode[inode_no].access_perm,"");
	Inode[inode_no].link_count=0;
	Inode[inode_no].file_size=0;
	for(i=0;i<MAX_DIRECT_BLOCKS;i++)
	{

		Inode[inode_no].table_of_contents[i]=-1;
	}
}

int Extract_Free_Inode()
{

	// THIS FUNCTION IS USED TO GET A FREE INODE FROM THE 
	// INODE FREE LIST AND RETURN THE INODE NUMBER

	int inode_no;
	
	inode_no=Super_Block.free_inodes_list[Super_Block.next_free_inode];
	Super_Block.next_free_inode++;		
	
	Inode[inode_no].link_count++;
	strcpy(Inode[inode_no].owner,"DU");
	strcpy(Inode[inode_no].type,"NORMAL");
	strcpy(Inode[inode_no].access_perm,"READ WRITE");
	
	if(Inconsistency_Type!=MISMATCH_IN_FREE_INODES_COUNT)
	{
		// WE DON'T UPDATE SUPER BLOCK 
		// IF THERE IS AN INCONSISTENCY
		Super_Block.no_of_free_inodes--;
	}
	return inode_no;
	
}	

void Free_Inode(int inode_no)
{
	int i;
	if(Inconsistency_Type!=INODE_LINK_NON_ZERO_BUT_DIRECTORY_ERASED)
	{
		// THAT IS IF USER DOSN'T WANT TO HAVE THE INCONSISTENCY
		Inode[inode_no].link_count=0;

		// IF USER WISHES THEN ABOVE LINE CAN BE SKIPPED
		// AND THE INODE WILL HAVE LINK COUNT NON ZERO
		// BUT THE CORRESPONDING DIRECTORY ENTRY WILL BE ERASED
	}
	
	// WE WILL INSERT THE FREE INODE AT THE END OF THE LIST
	// WE WILL FIRST CHECK WHETHER THE INODE IS FREE BY CHECKING 
	// ITS LINK COUNT
	if(Inode[inode_no].link_count==0)
	{
		for(i=Super_Block.next_free_inode;i<FREE_INODE_LIST_SIZE;i++)
		{
			Super_Block.free_inodes_list[i-1]=Super_Block.free_inodes_list[i];
		}
	
		Super_Block.free_inodes_list[FREE_INODE_LIST_SIZE-1]=inode_no;
		Super_Block.next_free_inode--;
	}

	// NOW WE UPDATE SUPER BLOCK
	if(Inconsistency_Type!=MISMATCH_IN_FREE_INODES_COUNT)
	{
		// THAT IS WE DONT UPDATE THE SUPER BLOCK 
		// IF THERE IS AN INCONSISTENCY
		Super_Block.no_of_free_inodes++;
	}


	// NOW WE WILL CLEAR ALL THE ENTRIES OF INODE
	
	strcpy(Inode[inode_no].owner,"");
	strcpy(Inode[inode_no].type,"");
	strcpy(Inode[inode_no].access_perm,"");
	Inode[inode_no].file_size=0;	
}
int Extract_Free_Block()
{

	// THIS FUNCTION IS USED TO GET A FREE DATA BLOCK FROM THE 
	// DATA BLOCK FREE LIST AND RETURN THE BLOCK NUMBER

	int block_no;	
	
	block_no=Super_Block.free_block_list[Super_Block.next_free_block];
	Super_Block.next_free_block++;
	if(Inconsistency_Type!=MISMATCH_IN_FREE_DATA_BLOCKS_COUNT)
	{
		// THAT IS WE DONT UPDATE THE SUPER BLOCK IF THERE IS 
		// AN INCONSISTENCY
		Super_Block.no_of_free_blocks--;
	}
	return block_no;
	
}

void Free_Data_Block(int block_no)
{
	// WE WILL INSERT THE FREE DATA BLOCK AT THE END OF THE LIST
	int i;
	for(i=Super_Block.next_free_block;i<FREE_BLOCK_LIST_SIZE;i++)
	{
		Super_Block.free_block_list[i-1]=Super_Block.free_block_list[i];
	}
	Super_Block.free_block_list[FREE_BLOCK_LIST_SIZE-1]=block_no;
	Super_Block.next_free_block--;
}

void Create_File()
{
	int i,j,count;
	int inode_no;
	int block_no;
	char text_char;
	char fname[NAME_LENGTH];
	char text[DATA_BLOCK_SIZE * MAX_DIRECT_BLOCKS];
	int no_of_blocks_required;
	int block_reqd_int;
	float block_reqd;
	
	if(Super_Block.no_of_free_inodes==0)
	{
		printf("\n\n\tSorry,No Inodes Available\n");
		return;
	}
	printf("\n\n\tEnter The File's Name ");
	scanf("%s",fname);

	// FIRST WE'LL CHECK WHETHER A FILE EXISTS WITH THE SAME NAME

	for(i=0;i<MAX_FILES;i++)
	{
		if(strcmp(fname,Directory[i].filename)==0)
		{
			printf("\n\n\tSorry,File Already Exists\n");
			return;
		}
	}
	fflush(stdin);
	printf("\n\n\tEnter The Text : Terminate the file contents with a $\n");
	count=0;
	while(1)
	{
            scanf("%c",&text_char);
            if(text_char!='$')
            {
               text[count]=text_char;
            }
            else
            {
                text[count]=0;
                break;
            }
            count++;
    }            
	if(strlen(text)>DATA_BLOCK_SIZE * MAX_DIRECT_BLOCKS)
	{
		printf("\n\n\tSorry,Your File's Size has exceeded the limit\n");
		return;
	}

    block_reqd = ((float)(strlen(text))/(DATA_BLOCK_SIZE));
    block_reqd_int = (strlen(text))/(DATA_BLOCK_SIZE);
    if(block_reqd>block_reqd_int)
    {
       no_of_blocks_required = block_reqd_int+1;
    }
    else
    {
        no_of_blocks_required = block_reqd_int;
    }
	
	if(no_of_blocks_required>Super_Block.no_of_free_blocks)
	{
		printf("\n\n\tSorry,Your File needs more data blocks than what is currently available\n");
		return;
	}
	
	// WE WILL NOW ASSIGN INODES AND DATA BLOCKS TO THE FILE

	// ASSIGNING DIRECTORY ENTRY TO THE FILE
	// ASSIGN INODE TO THE FILE

	inode_no=Extract_Free_Inode();
	
	// ASSIGN DIRECTORY TABLE'S POINTER TO THE INODE

	if(Inconsistency_Type!=INODE_LINK_NON_ZERO_BUT_DIRECTORY_ERASED)
	{

		// THAT IS IF NO INCONSISTENCY IS THERE THEN THE 
		// DIRECTORY ENTRY WILL BE ALLOCATED
		for(i=0;i<MAX_FILES;i++)
		{
			if(Directory[i].pointer_to_inode==-1)
			{
				strcpy(Directory[i].filename,fname);
				break;
			}
		}
		Directory[i].pointer_to_inode=inode_no;
		
		if(Inconsistency_Type==INODE_FREE_BUT_DIRECTORY_EXISTS)
		{
			// THEN WE WILL PLACE THE INODE BACK TO FRONT OF LIST
			Super_Block.next_free_inode--;
			Super_Block.free_inodes_list[Super_Block.next_free_inode]=inode_no;
			Super_Block.no_of_free_inodes++;
			return;
		}
		// WE WILL NOW ASSIGN VALUES OF INODE STRUCTURE

		Inode[inode_no].file_size= strlen(text);

		// NOW WE WILL ASSIGN DATA BLOCKS TO THE FILE'S DATA
	
		for(j=0;j<no_of_blocks_required;j++)
		{
			block_no=Extract_Free_Block();
			count=0;
			while(count!=DATA_BLOCK_SIZE && text[j*DATA_BLOCK_SIZE+count]!='\0')
			{
				// WE WRITE DATA ON THE BLOCKS
				Block[block_no].data[count] = text[j*DATA_BLOCK_SIZE+count];
				count++;
			}
			// NOW WE ASSIGN BLOCK NUMBERS TO INODE'S TABLE OF CONTENTS
		
			if(Inconsistency_Type!=LOST_DATA_BLOCK)
			{
				// THAT IS WE DON'T ASSIGN THE BLOCK TO INODE
				Inode[inode_no].table_of_contents[j]= block_no;
			}
		}
	}
}

void Delete_File()
{
	int i,j;
	int found=0;
	int inode_no;
	int block_no;
	char fname[NAME_LENGTH];

	if(Super_Block.no_of_free_inodes==NO_OF_INODES)
	{
		printf("\n\n\tSorry,No File Exists \n");
		return;
	}
	printf("\n\n\tEnter The File's Name ");
	scanf("%s",fname);

	// FIRST WE'LL CHECK WHETHER A FILE EXISTS WITH THE SAME NAME

	for(i=0;i<MAX_FILES;i++)
	{
		if(strcmp(fname,Directory[i].filename)==0)
		{
			found=1;		// THAT IS WE HAVE FOUND THE FILE
			
			// NOW WE HAVE TO FREE THE BLOCK AND INODE
			// AND CLEAR THE DIRECTORY ENTRY

			// WE FIRST OBTAIN THE FILE'S CORRESPONDING INODE
			inode_no = Directory[i].pointer_to_inode;
				
			// WE NOW GET THE BLOCKS ASSOCIATED WITH THE FILE
			// AND WE PUT THEM BACK IN FREE BLOCK LIST 
			// AND UPDATE THE SUPER BLOCK 

			for(j=0;j<MAX_DIRECT_BLOCKS;j++)
			{
				if(Inode[inode_no].table_of_contents[j]!=-1)
				{
					block_no=Inode[inode_no].table_of_contents[j];

					if(Inconsistency_Type!=LOST_DATA_BLOCK)
					{
						// THAT IS WE DONT ASSIGN THE BLOCK BACK TO
						// FREE LIST IF THERE IS AN INCONSISTENCY
						Free_Data_Block(block_no);
					}
					// WE NOW UPDATE SUPER BLOCK
					if(Inconsistency_Type!=MISMATCH_IN_FREE_DATA_BLOCKS_COUNT)
					{
						// THAT IS WE DONT UPDATE THE SUPER BLOCK
						// IF THERE IS AN INCONSISTENCY
						Super_Block.no_of_free_blocks++;
					}
					Inode[inode_no].table_of_contents[j]=-1;
				}
			}

			// NOW WE CLEAR THE INODE AND PLACE IT IN FREE LIST
			// AND UPDATE THE SUPER BLOCK

			Free_Inode(inode_no);

		
			// NOW WE WILL CLEAR THE DIRECTORY ENTRY
			if(Inconsistency_Type!=INODE_FREE_BUT_DIRECTORY_EXISTS)
			{
				// THAT IS WE WILL CLEAR THE DIRECTORY ENTRY 
				// IF NO INCONSISTENCY EXISTS
				Directory[i].pointer_to_inode=-1;
				strcpy(Directory[i].filename,"");
			}
		}	
	}
	if(found ==0)
	{
		printf("\n\n\tSorry,No File Exists With The Given Name");
		return;
	}
}

void Display_File()
{
	int i,j;
	int found=0;
	int count=0;
	int inode_no;
	int block_no;
	char fname[NAME_LENGTH];
	
	if(Super_Block.no_of_free_inodes==NO_OF_INODES)
	{
		printf("\n\n\tSorry,No File Created\n");
		return;
	}
	printf("\n\n\tEnter The File's Name ");
	scanf("%s",fname);

	// FIRST WE'LL CHECK WHETHER A FILE EXISTS WITH THE SAME NAME

	for(i=0;i<MAX_FILES;i++)
	{
		if(strcmp(fname,Directory[i].filename)==0)
		{
			found=1; // THAT IS THE FILE HAS BEEN FOUND
			
			// WE GET THE CORRESPONDING INODE
			inode_no = Directory[i].pointer_to_inode;
			// NOW WE PRINT THE CONTENTS OF THE DATA BLOCK ONE BY ONE
			printf("\n\t Contents of the file are : \n\t");
			for(j=0;j<MAX_DIRECT_BLOCKS;j++)
			{
				if(Inode[inode_no].table_of_contents[j]!=-1)
				{
					block_no=Inode[inode_no].table_of_contents[j];
					count=0;
					while(count!=DATA_BLOCK_SIZE && Block[block_no].data[count]!='\0')
					{
						printf("%c",Block[block_no].data[count]);
						count++;
					}
				}
			}

			break;
		}
	}
	if(found ==0)
	{
		printf("\n\n\tSorry,File Does Not Exist\n");
		return;
	}
}

void Display_Directory()
{
	int i;
	int not_empty=0;
	for(i=0;i<MAX_FILES;i++)
	{
		if(Directory[i].pointer_to_inode!=-1)
		{
			not_empty=1;
			printf("\n%s",Directory[i].filename);
		}
	}
	if(not_empty==0)
	{
		printf("\n\n\tDirectory is Empty\n");
	}

}

void Display_Super_Block()
{
	int i;
	
	printf("\n\tSUPER BLOCK STRUCTURE :\n");
	printf("\nNumber Of Free Inodes are :%d",Super_Block.no_of_free_inodes);
	printf("\nFree Inodes Are : \n");
	for(i=Super_Block.next_free_inode;i<FREE_INODE_LIST_SIZE;i++)
	{
		printf(" %d",Super_Block.free_inodes_list[i]);
	}
	printf("\nNext Free Inode is : %d",Super_Block.free_inodes_list[Super_Block.next_free_inode]);

	printf("\n\nNumber Of Free Data Blocks are :%d",Super_Block.no_of_free_blocks);
	printf("\nFree Data Blocks Are:\n");
	for(i=Super_Block.next_free_block;i<FREE_BLOCK_LIST_SIZE;i++)
	{
		printf("%d ",Super_Block.free_block_list[i]);
	}
	printf("\nNext Free Block is %d",Super_Block.free_block_list[Super_Block.next_free_block]);

}
void print_details()
{
	int i;
	printf("\n\tFree Inodes's List :-");
	for(i=Super_Block.next_free_inode;i<FREE_INODE_LIST_SIZE;i++)
		printf(" %d ",Super_Block.free_inodes_list[i]);
	printf("\n\tNext Free Inode is %d",Super_Block.free_inodes_list[Super_Block.next_free_inode]);
	printf("\n\tFree Inodes Remaining are %d",Super_Block.no_of_free_inodes);

	printf("\n\tFree Blocks List :-");
	for(i=Super_Block.next_free_block;i<FREE_BLOCK_LIST_SIZE;i++)
		printf(" %d ",Super_Block.free_block_list[i]);
	printf("\n\tNext Free Block is %d",Super_Block.free_block_list[Super_Block.next_free_block]);
	printf("\n\tFree Blocks Remaining are %d",Super_Block.no_of_free_blocks);
}

void Display_Inconsistency_SubMenu()
{
	int ch;

	printf("\n\n\tINCONSISTENCY SUB-MENU\n");
	printf("\n\n\tChoose When To Induce Inconsistency\n");
	printf("\n\n\t1-While Creating A File");
	printf("\n\t2-While Deleting A File");
	printf("\n\n\tEnter Your Choice : ");
	scanf("%d",&ch);

	if(ch==1)
	{
		Create_File();
	}
	else
		if(ch==2)
		{
			Delete_File();
		}
}


void Create_Inconsistency()
{
	int ch;

	// WE WILL DISPLAY A MENU TO THE USER WHERE HE CAN CHOSE
	// WHAT INCONSISTENCY HE WANTS TO IMPLEMENT
	
	Inconsistency_Type=NO_INCONSISTENCY;
	printf("\n\t\tINCONSISTENCY MENU\n");
	printf("\n\n\tChoose Which Inconsistency To Implement\n");
		
	printf("\n\t0-No Inconsistency");
	printf("\n\n\t1-Losing A Data Block");

	printf("\n\n\t2-Inode has a Non Zero Link Count But "); 
	printf("Its Directory Entry is Deleted");
		
	printf("\n\n\t3-Inode has been Freed But There is a"); 
	printf(" Directory Entry Pointing to it");
		
	printf("\n\n\t4-The Number Of Free Blocks Don't Match ");
	printf("Up With The Super Block");

	printf("\n\n\t5-The Number Of Free Inodes Don't Match ");
	printf("Up With The Super Block");

	printf("\n\n\t6-Return To Main Menu");

	printf("\n\n\tEnter Your Choice:");
	scanf("%d",&ch);
		
	switch(ch)
	{
		case 0:
		case 6: return;
	
		case 1: 
				Inconsistency_Type=LOST_DATA_BLOCK;
				break;
		case 2: 
				Inconsistency_Type=INODE_LINK_NON_ZERO_BUT_DIRECTORY_ERASED;
				break;
		case 3: 
				Inconsistency_Type=INODE_FREE_BUT_DIRECTORY_EXISTS;
				break;
		case 4: Inconsistency_Type=MISMATCH_IN_FREE_DATA_BLOCKS_COUNT;
				break;
		case 5: Inconsistency_Type=MISMATCH_IN_FREE_INODES_COUNT;
				break;
		}
		Display_Inconsistency_SubMenu();
	
	return ;
	
}

void FSCK_Check_Lost_Blocks()
{
	int i,j,k;

	for(i=0;i<NO_OF_DATA_BLOCKS;i++)
	{
		// WE WILL FIRST CHECK WHETHER THE BLOCK BELONGS TO FREE LIST 
		for(j=Super_Block.next_free_block;j<FREE_BLOCK_LIST_SIZE;j++)
		{
			if(Super_Block.free_block_list[j]==i)
			{
				// THAT IS THE BLOCK IS IN FREE LIST
				goto outer_loop;
			}
		}
		// IF BLOCK IS NOT IN FREE LIST THEN CONTROL REACHES HERE
		// WE WILL CHECK WHETHER THE BLOCK IS ASSIGNED TO AN INODE

		for(j=0;j<NO_OF_INODES;j++)
		{
			// WE WILL CHECK THE VARIOUS TABLE OF CONTENTS
			for(k=0;k<MAX_DIRECT_BLOCKS;k++)
			{
				if(Inode[j].table_of_contents[k]==i)
				{
					// THAT IS BLOCK IS ASSIGNED TO AN INODE
					goto outer_loop;
				}
			}
		}
		// CONTROL REACHES HERE IF THE BLOCK IS NOT ON THE FREE LIST
		// NOR ASSIGNED AN INODE 
	 	// THAT IS BLOCK IS LOST

		printf("\nBlock No : %d was Lost But Now it is Recovered",i);
		Free_Data_Block(i);
		// NOW THE LABEL FOR GOTO
		outer_loop: ;
	}	
	
	
}

void FSCK_Check_Non_Zero_Link_No_Directory_Entry()
{
	int i,j;
	for(i=0;i<NO_OF_INODES;i++)
	{
		if(Inode[i].link_count==0)
		{
			// THAT IS INODE HAS LINK COUNT AS ZERO
			goto outer_loop;
		}
		else
		{
			// THAT IS INODE LINK COUNT IS NON ZERO
			// NOW WE CHECK THE VARIOUS DIRECTORY ENTRIES
			for(j=0;j<MAX_FILES;j++)
			{
				if(Directory[j].pointer_to_inode==i)
				{
					// THAT IS A DIRECTORY ENTRY IS ALLOTED TO INODE
						goto outer_loop;
				}
			}
			// NOW CONTROL REACHES HERE IF THERE IS SOME INCONSISTENCY
			printf("\n\tInode No : %d Had Link Count Non Zero But No Directory Entry",i);
			Free_Inode(i);
		}
		outer_loop: ;
	}
	
}
void FSCK_Check_Free_Inodes_With_Directory_Entry()
{
	int i;
	int inode_no;
	for(i=0;i<MAX_FILES;i++)
	{
		inode_no=Directory[i].pointer_to_inode;
		if(inode_no!=-1)
		{
			// WE WILL CHECK WHETHER THE INODE IS FREE
			if(Inode[inode_no].link_count==0)
			{
				// THAT IS INODE IS FREE
				printf("\n\tFile Name :%s Points to a Free Inode :%d So We Remove The File",Directory[i].filename,inode_no);
				strcpy(Directory[i].filename,"");
				Directory[i].pointer_to_inode=-1;
			}
		}
	}
}

void FSCK_Block_Count_MisMatch()
{
	int count;
	count= FREE_BLOCK_LIST_SIZE - Super_Block.next_free_block;
	if(count!= Super_Block.no_of_free_blocks)
	{
		printf("\n\t There Was a Mis-Match In the count of No of Free Blocks ");
		printf("\n\t But That Has Been Rectified ");
		printf("\n\n\t Number of Free blocks = %d",count);
		Super_Block.no_of_free_blocks=count;
	}
}
void FSCK_Inode_Count_MisMatch()
{
	int count_free_inodes=0;
	int i;
	for(i=0;i<NO_OF_INODES;i++)
	{
		if(Inode[i].link_count==0)
		{
			// THAT IS INODE HAS LINK COUNT AS ZERO
			count_free_inodes++;
		}
	
	}
	
	if(count_free_inodes!= Super_Block.no_of_free_inodes)
	{
		printf("\n\t There Was a Mis-Match In the count of No of Free Inodes ");
		printf("\n\t But That Has Been Rectified ");
		printf("\n\n\t Number of Free Inodes = %d",count_free_inodes);
		Super_Block.no_of_free_inodes=count_free_inodes;
	}
}
void Run_FSCK()
{
	int ch;
	printf("\n\n\t FSCK RESULTS:-\n\n");
	
	// HERE WE WILL FIRST CHECK FOR LOST DATA BLOCKS
	FSCK_Check_Lost_Blocks();
	printf(" \n");
	
	// NOW FSCK WILL CHECK FOR 
	// INODES WITH NON ZERO LINK COUNT BUT NO DIRECTORY ENTRY
	FSCK_Check_Non_Zero_Link_No_Directory_Entry();
	printf("\n");
	
	// NOW FSCK WILL CHECK FOR 
	// FREE INODES WITH DIRECTORY ENTRIES 
	FSCK_Check_Free_Inodes_With_Directory_Entry();
	printf("\n");

	// NOW FSCK WILL CHECK FOR 
	// MISMATCH IN FREE BLOCK COUNT
	FSCK_Block_Count_MisMatch();
	printf("\n");

	// NOW FSCK WILL CHECK FOR 
	// MISMATCH IN FREE INODE COUNT
	FSCK_Inode_Count_MisMatch();
	printf("\n");

	printf("\n\tPress Any Key To Continue....");
	scanf("%d",&ch);

}
void Initialize_File_System()
{
	int i;
	 // WE FIRST INITIALIZE THE SUPER BLOCK
	Super_Block_Initialization();
	
	//WE NOW INITIALIZE THE INODES
	
	for(i=0;i<NO_OF_INODES;i++)
	{
		Initialize_Inodes(i);
	}
	

	// WE ALSO PERFORM INITIALIZATION ON DIRECTORY TABLE ENTRIES

	for(i=0;i<MAX_FILES;i++)
	{
		strcpy(Directory[i].filename,"");
		Directory[i].pointer_to_inode=-1;
	}
}
void Write_Data_Into_File()
{
	int i;
	FILE *fp;
	fp=fopen("UnixFileSystem.txt","wb");
	// FIRST THE SUPER BLOCK
		
	fwrite(&Super_Block,sizeof(Super_Block),1,fp);
		
	// NEXT THE DIRECTORY STRUCTURE

	for(i=0;i<MAX_FILES;i++)
	{
		fwrite(&Directory[i],sizeof(Directory[i]),1,fp);
	}

	// NEXT THE INODE DATA
	for(i=0;i<NO_OF_INODES;i++)
	{
		fwrite(&Inode[i],sizeof(Inode[i]),1,fp);
	}
	// NEXT THE DATA BLOCKS
	for(i=0;i<NO_OF_DATA_BLOCKS;i++)
	{
		fwrite(&Block[i],sizeof(Block[i]),1,fp);
	}
	fclose(fp);
}

void Read_Data_From_File()
{
	int i;
	FILE *fp;

	fp=fopen("UnixFileSystem.txt","rb");
	// FIRST THE SUPER BLOCK
		
	fread(&Super_Block,sizeof(Super_Block),1,fp);
		
	// NEXT THE DIRECTORY STRUCTURE

	for(i=0;i<MAX_FILES;i++)
	{
		fread(&Directory[i],sizeof(Directory[i]),1,fp);
	}

	// NEXT THE INODE DATA
	for(i=0;i<NO_OF_INODES;i++)
	{
		fread(&Inode[i],sizeof(Inode[i]),1,fp);
	}
	// NEXT THE DATA BLOCKS
	for(i=0;i<NO_OF_DATA_BLOCKS;i++)
	{
		fread(&Block[i],sizeof(Block[i]),1,fp);
	}
	fclose(fp);
}
int main()
{
	int ch;
	FILE *fp;

	fp=fopen("UnixFileSystem.txt","rb");

	if(fp==NULL)
	{

		// THAT IS FILE DOES NOT EXIST 
		// THAT IS THIS IS THE FIRST TIME THE PROGRAM IS RUNNING
	
    	//WE WILL FIRST PERFORM SOME INITIALIZATIONS
			Initialize_File_System();

		// WE WILL WRITE THE FILE SYSTEM DATA ON THE FILE
		
			Write_Data_Into_File();
						
	}
	else
	{
		 // ELSE WE NEED TO GET THE VALUES FROM THE FILE
			Read_Data_From_File();
			fclose(fp);
	}
		
	do
	{
		Inconsistency_Type=NO_INCONSISTENCY;
		printf("\n\t\tMAIN MENU\n");
		printf("\n\n\tChoose an Option\n");
		printf("\n\t1-Create a File");
		printf("\n\t2-Delete a File");
		printf("\n\t3-View a File");
		printf("\n\t4-View the Directory");
		printf("\n\t5-View Super Block");
		printf("\n\t6-Create Inconsistency");
		printf("\n\t7-Run FSCK");	
		printf("\n\t8-Exit");
		printf("\n\n\tEnter Your Choice:");
		scanf("%d",&ch);
		
		switch(ch)
		{
		case 1: Create_File();
				print_details();
				break;
		case 2: Delete_File();
				print_details();
				break;
		case 3: Display_File();
				break;
		case 4: Display_Directory();
				break;
		case 5: Display_Super_Block();
				break;
		case 6: Create_Inconsistency();
				break;
		case 7: Run_FSCK();
				break;
		case 8: break;
		}
		
		Write_Data_Into_File();			
	}while(ch!=8);
	return 0;
}


