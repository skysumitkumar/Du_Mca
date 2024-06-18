//Anuj Jain
//Roll no 4
//Program to simulate 'ls' command of unix operating system

#include <dirent.h>
#include <linux/unistd.h>
#include<stdio.h>
#include<string.h>
#include <unistd.h>
#include <linux/types.h>
#include <sys/types.h>


int main(int argc,char* argv[])
{
	struct dirent *object;
	DIR *direct;
	char* buffer=(char*) get_current_dir_name();
	int file_d,option;
	int l;
	switch(argc)
	{
		//only one argument is passes
	case 1:
		direct=opendir(buffer);
		file_d=dirfile_d(direct);
		for(object=readdir(direct);object;object=readdir(direct))
			if(object->d_name[0] != '.')
				printf("%s\t",object->d_name);
		break;
		//two arguments are passed
	case 2:
		if(argv[1][0]!='-')
		{
			direct=opendir(argv[1]);
			if(!direct)
			{
				printf("Not found:Please check path\n");
				return -1;
			}
			file_d=dirfile_d(direct);
			for(object=readdir(direct);object;object=readdir(direct))
				if(object->d_name[0] != '.')
					printf("%s\t",object->d_name);
			break;
		}
		//if 3 arguments are passed
	case 3:
		if(argv[1][0]=='-')
		{
			if(argc==3)
				direct=opendir(argv[2]);
			else
				direct=opendir(buffer);
			option=1;
		}
		else if(argv[2][0]=='-')
		{

			direct=opendir(argv[1]);
			option=2;
		}
		else
		{
			printf("Arguments unexpected");
			return -2;
		}
		if(!direct)
		{
			printf("Not found:Please check path\n");
			return -1;
		}
		file_d=dirfile_d(direct);

		switch(argv[option][1])
		{
		case 'a':
 			for(object=readdir(direct);object;object=readdir(direct))
				printf("%s\t",object->d_name);
			break;
		case 'A':
			object=readdir(direct);
			object=readdir(direct);
 			for(object=readdir(direct);object;object=readdir(direct))
				if(object->d_name[0] != '.')
					printf("%s\t",object->d_name);
			break;
		case 'B':
			object=readdir(direct);
			object=readdir(direct);
 			for(object=readdir(direct);object;object=readdir(direct))
			{
				l=strlen(object->d_name)-1;
				if(object->d_name[l]!='~' && object->d_name[0] != '.')
					printf("%s\t",object->d_name);
			}
			break;
		case 'm':
			object=readdir(direct);
			object=readdir(direct);
			for(object=readdir(direct),printf("%s",object->d_name);object;object=readdir(direct))
				if(object->d_name[0] != '.')
					printf(",   %s",object->d_name);

			break;

		case '1':
			object=readdir(direct);
			object=readdir(direct);
 			for(object=readdir(direct);object;object=readdir(direct))
				if(object->d_name[0] != '.')
					printf("%s\n",object->d_name);

			break;

		default: printf("\nCase not handeled\n");
		}

	}
	closedir(direct);
	printf("\n");
	return 0;
}
