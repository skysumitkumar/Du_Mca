/*   This program reads student record from user & forms its B-Tree with key
     as roll no. B-Tree containing roll no. is stored in a file & corresponding
     records are stored in seperate file as specified by user.
				   Submitted By:-
					MANISH GARG
					Roll no: 09
					IInd Semester	    */


# include <fstream.h>
# include <conio.h>
# include <stdio.h>
# include <iomanip.h>
# include <string.h>


struct node
{    //  structure of node of a B-Tree
	node *son[5];
	int numsons;
	int data[4];
	node *father;
	int ptr[4];
	int index;
};
typedef node *nodeptr;


struct record
{    //  structure of record read from user
	int roll;
	char name[20];
	char address[50];
};
typedef record student;


    //  definition of functions used in program
int getpos(nodeptr l, int value);
nodeptr find(nodeptr l,int value,int &pointer,int &pos,int &status);
nodeptr makenode(int value,int pointer);
int insert(nodeptr &l,int value,int pointer);
void traverse(nodeptr l);
void insnode(nodeptr nd, int pos, int value,int pointer,nodeptr newnode);
void split(nodeptr nd,int pos,int value,int pointer,nodeptr newnode,nodeptr &nd2,int &midval,int &p);
void menu();
int readint();
void store(nodeptr l,char filename[]);


void main()
{        //  main() function
	clrscr();
	char filename[15];  // name of file where B-Tree is stored
	char fname[15];   //   name of file where records are stored
	int choice,status,temp;
	cout<<"Enter index filename : ";
	cin>>filename;       //  read name of index file
	cout<<"Record file name : ";
	cin>>fname;          //  read name of record file
	fstream infile;      //  open index file
	infile.open(filename,ios::in | ios::out | ios::app);
	infile.seekg(0);
	fstream recfile;     //  open record file
	recfile.open(fname,ios::in | ios::out | ios::app);
	nodeptr root = NULL;      //   initialise B-Tree
	int value = 0;            //   variable to hold key value
	int pointer = 0;          //   variable to hold pointer to record file
	char text[15];            //   string to read text from index file
	if(infile)
		infile>>text;
	while(infile)
	{   //  loop to read keys from index file
		if(text[strlen(text)-1] == ':')
		{           //   reading address from index file
			infile>>text;
		}
		else
		{           //  reading key, pointer to record file from index file
			value = pointer = 0;
			for(int i=0;i<strlen(text);i++)
			{           //  evaluating key from index file
				value *= 10;
				value += (int)text[i]-48;
			}
			for(i=0;i<15;i++)
				text[i] = NULL;
			infile>>text;
			for(i=0;i<strlen(text);i++)
			{           //  evaluating pointer from index file
				pointer *= 10;
				pointer += (int)text[i]-48;
			}
				//  insert value & pointer into B-Tree
			status = insert(root,value,pointer);
			infile>>text;     //  read branch from index file
		}
		for(int i=0;i<15;i++)
			text[i] = NULL;
		infile>>text;   //  reading next record
	}
	int length = 82;        //  length of each record in record file
	student *stud;          //  instance to read record from user
	do
	{  //  loop to read choice from user & perform that operation
		menu();         //  read choice from user
		choice = readint();
		stud->roll = 0;
		for(int k=0;k<50;k++)    //  initialising arrays
		{
			if(k<20)
				stud->name[k] = NULL;
			stud->address[k] = NULL;
		}
		switch (choice)
		{
			case 1 ://  case of inserting a record
				    cout<<"Input record "<<endl;
				    cout<<"Enter roll number : ";
				    value = readint();
				    recfile.seekg(0, ios::end);  //  go to 0 bytes from end
				    pointer = recfile.tellg();
					 //  calculating pointer to record read
				    pointer /= length;
					//  insert roll no. & pointer in B-Tree
				    int ptr;
				    find(root,value,ptr,temp,status);
					//   call function to insert into B-Tree
				    while(status == 0)
				    {      //  case of duplicate roll number
						cout<<"\nThis Roll number already exists, enter another : ";
						value = readint();
						find(root,value,ptr,temp,status);
				    }
				    status = insert(root,value,pointer);
					   //  reading record from user
				    stud->roll = value;
				    cout<<"Enter name : ";
				    gets(stud->name);
				    cout<<"Enter address : ";
				    gets(stud->address);
				    recfile.seekg(0, ios::end);  //  go to 0 bytes from end
					   //   writing record to record file
				    recfile<<setw(10)<<stud->roll<<setw(20)<<stud->name<<setw(50)<<stud->address<<endl;
				    break;

			case 2://  case of traversing a record
				    cout<<"Inorder traversal is as follows"<<endl;
				    traverse(root);
					   //  call function to traverse B-Tree
				    break;

			case 3://  case of searching a roll no. into B-Tree
				    cout<<"Enter roll number to be searched: ";
				    value = readint();
				    find(root,value,pointer,temp,status);
					 //  call method to search value into B-Tree
				    if(status==0)
				    {   //  successful search
						cout<<"The element is present in B-Tree"<<endl;
						int position = pointer*length;
						recfile.seekg(position);  //  bytes from begin
						     //  read record from record file
						recfile>>stud->roll;
						cout<<"\tRoll number = "<<stud->roll<<endl;
						recfile>>stud->name;
						cout<<"\tName = "<<stud->name;
						while(recfile.tellg() != (position+30))
						{    //  if name consist of more than one word
							for(int i=0;i<15;i++)
								stud->name[i] = NULL;
							recfile>>stud->name;
							cout<<" "<<stud->name;
						}
						cout<<endl;
						recfile>>stud->address;
						cout<<"\tAddress = "<<stud->address;
						while(recfile.tellg() != (position+length-2))
						{   //  if address consist of more than one word
							for(int i=0;i<50;i++)
								stud->address[i] = NULL;
							recfile>>stud->address;
							cout<<" "<<stud->address;
						}
						cout<<endl;
				    }
				    else
					//  unsuccessfull search
						cout<<"The rol number is not present in B-Tree"<<endl;
				    break;

			case 4://  case of EXIT from program
				    infile.close();
					    //  destroying previous contents of file
				    ofstream enterfile;
				    enterfile.open(filename);
				    enterfile.close();
				    store(root,filename);  //  call function to store B-Tree into record file
				    cout<<"\nPress a key to Exit";
				    getch();
				    break;

			default:// case of invalid choice
				    cout<<"\nInvalid choice entered, enter another ";
		}
	}
	while(choice!=4);
}    //  end of main()


void menu()                    //  purpose: display menu
{                              //  call by main()
	cout<<"\n1. Insert";
	cout<<"\n2. Traverse";
	cout<<"\n3. Search";
	cout<<"\n4. Exit";
	cout<<"\n\nEnter your choice: ";
}


int readint()                  //  purpose: return an integer read from user
{                              //  call by main()
	char temp[10];
label:	gets(temp);
	int value = 0;
	for(int i=0;i<strlen(temp);i++)
	{        //  convert string into integer
		if(temp[i]<48 || temp[i]>57)
		{    //  if any character is not a number
			cout<<"Reenter corrent integer : ";
			goto label;
		}
		value *= 10;
		value += temp[i]-48;
	}
	return value;
}


nodeptr find(nodeptr l,int value,int &pointer,int &pos,int &status)
{                              //  purpose: find value in B-Tree, if successfull return status=0
			       //  call by main()
	nodeptr temp = NULL;
	int i;
	while(l != NULL)
	{             //  call function to get position of value in node
		i = getpos(l,value);
		temp = l;
		if(i < l->numsons-1 && value == l->data[i])
		{    //  value is present in B-Tree
			status = 0;               //  return status = 0
			pos = i;                  //  return corresponding position in node
			pointer = temp->ptr[pos]; //  return pointer variable to record file
			return temp;              //  return pointer to node
		}
		l = l->son[i];
	}
	    //  value not present in B-Tree
	status = 1;   //   return status = 1
	pos = i;
	return temp;
}


int getpos(nodeptr l, int value)
{                              //  purpose: return position of value in node
			       //  call by find()
	for(int i = 0; ((l->data[i] < value) && (i<l->numsons-1)); i++);
	return i;
}


nodeptr makenode(int value,int pointer)
{                              //  purpose: make new node for B-Tree
			       //  call by insert()
	nodeptr l = new node;
	for(int i=0;i<5;i++)
		l->son[i] = NULL;
	    //  initialising
	l->father = NULL;
	l->index = 0;
	l->numsons = 2;
	l->data[0] = value;
	l->ptr[0] = pointer;
	return l;
}


int insert(nodeptr &l,int value,int pointer)
{                              //  purpose: insert value,pointer into B-Tree
			       //  call by main()
	if(l == NULL)
	{    //  if B-Tree is empty
		l = makenode(value,pointer);
		return 1;
	}
	     //  if B-Tree is not empty
	nodeptr newnode = NULL,nd2,f;
	int pos,status,midval,p;
	nodeptr nd = find(l,value,pointer,pos,status);
	if (status == 0)
		return 0;
	f = nd->father;
	while(f != NULL && nd->numsons == 5)
	{
		split(nd,pos,value,pointer,newnode,nd2,midval,p);
		newnode = nd2;
		nd->index = getpos(f,nd->data[0]);
		pos = nd->index;
		nd = f;
		f = nd->father;
		value = midval;
		pointer = p;
	}
	if(nd->numsons < 5)
	{
		insnode(nd,pos,value,pointer,newnode);
		return 1;
	}
	split(nd,pos,value,pointer,newnode,nd2,midval,p);
	l = makenode(midval,p);
	l->son[0] = nd;
	l->son[1] = nd2;
	nd->father = l;
	nd2->father = l;
	return 1;
}


void split(nodeptr nd,int pos,int value,int pointer,nodeptr newnode,nodeptr &nd2,int &midval,int &p)
{
	nd2=new node;
	if(pos > 2)
	{
		nd2->data[0] = nd->data[3];
		nd2->ptr[0] = nd->ptr[3];
		nd2->son[0] = nd->son[3];
		nd2->son[1] = nd->son[4];
		nd2->numsons = 2;
		nd2->father = nd->father;
		insnode(nd2,pos-3,value,pointer,newnode);
		midval = nd->data[2];
		p = nd->ptr[2];
		nd->numsons = 3;
		return;
	}
	if(pos == 2)
	{
		nd2->data[0] = nd->data[2];
		nd2->ptr[0] = nd->ptr[2];
		nd2->data[1] = nd->data[3];
		nd2->ptr[1] = nd->ptr[3];
		for(int i=0;i<3;i++)
			nd2->son[i] = nd->son[i+2];
		nd2->numsons = 3;
		nd2->father = nd->father;
		nd2->son[2] = newnode;
		nd->numsons = 3;
		midval = value;
		p = pointer;
		return;
	}
	if(pos < 2)
	{
		nd2->data[0] = nd->data[2];
		nd2->ptr[0] = nd->ptr[2];
		nd2->data[1] = nd->data[3];
		nd2->ptr[1] = nd->ptr[3];
		for(int i=0;i<3;i++)
			nd2->son[i] = nd->son[i+2];
		nd2->numsons = 3;
		nd2->father = nd->father;
		midval = nd->data[1];
		p = nd->ptr[1];
		nd->numsons = 2;
		insnode(nd,pos,value,pointer,newnode);
		return;
	}
}


void insnode(nodeptr nd, int pos, int value,int pointer,nodeptr newnode)
{
	for(int i=nd->numsons-1;i>=pos+1;i--)
	{
		nd->son[i+1] = nd->son[i];
		nd->data[i] = nd->data[i-1];
		nd->ptr[i] = nd->ptr[i-1];
	}
	nd->son[pos+1] = newnode;
	nd->data[pos] = value;
	nd->ptr[pos] = pointer;
	nd->numsons++;
}


void traverse(nodeptr l)       //  puprose: traverse B-Tree
{                              //  call by main()
	int temp;
	if(l!=NULL)
	{
		temp=l->numsons;
		for(int i=0;i<temp-1;i++)
		{
			traverse(l->son[i]);
			cout<<"\t"<<l->data[i]<<"\n"; //  print roll no. on console
		}
		traverse(l->son[temp-1]);
	}
}


void store(nodeptr l,char filename[])    //  purpose:  store B-Tree into index file
{                              	         //  call by main()
	int temp,value,pointer;
	fstream file(filename,ios::out | ios::app);   //  open file
	file.seekg(0,ios::end);
	if(l!=NULL)
	{
		temp=l->numsons;
		file<<(int)l<<":";    //  write address of node with ':'
		for(int k=0;k<temp-1;k++)
		{
			value = l->data[k];
			pointer = l->ptr[k];
				     //  write branch, roll no., pointer to file
			if(l->son[k] != NULL)
				file<<setw(8)<<(int)l->son[k]<<setw(8)<<value<<setw(4)<<pointer;
			else         //  write -1 if branch is NULL
				file<<setw(8)<<"-1"<<setw(8)<<value<<setw(4)<<pointer;
		}
				     //  write last branch of node
		if(l->son[temp-1] != NULL)
			file<<setw(8)<<(int)l->son[temp-1]<<endl;
		else
			file<<setw(8)<<"-1"<<endl;
		for(int i=0;i<temp-1;i++)
			store(l->son[i],filename);
		store(l->son[temp-1],filename);
	}
}        //   END OF PROGRAM