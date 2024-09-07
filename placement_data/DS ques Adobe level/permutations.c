#include<stdio.h>
#include<string.h>
void permutation(char arr[],char str[],int len)
{
     if(strlen(arr)==strlen(str))
        printf("\n%s",arr);
     else
     {
         int i,temp;
         arr[len]=str[len];
         for(i=len;i>=0;i--)
         {
             permutation(arr,str,len+1);
             temp=arr[i];
             arr[i]=arr[i-1];
             arr[i-1]=temp;   
         }
         for(i=0;i<=len;i++)
             arr[i]=arr[i+1];
     }
}

void permute(char text[])
{
     int len;
     char* arr;
     len=strlen(text);
     arr=(char*)calloc(sizeof(char),len+1);
     permutation(arr,text,0);
}
void main()
{
     char text[20];
     printf("enter text");
     gets(text);
     printf("\n\n");
     permute(text);
     getchar();
     getchar();
}

               
     
