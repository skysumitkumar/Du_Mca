int count=0;
void permutations(char arr[],int i,int len)
{
     if(i==len)
     {
        printf("%s\n",arr);
        count++;
     }
     else
     {
         int j=i,k;
         char ch;
         do{
            char temp;
            permutations(arr,i+1,len);
            if(j>0)
            {
/*
            The following if is the only change to make it work for repeating
*/
             if(arr[j]==arr[j-1])
                 break;
              temp = arr[j];
              arr[j]=arr[j-1];
              arr[j-1]=temp;
            }
            j--;
         }while(j>=0);
         k = j==-1? 0:j;
         ch = arr[k];
         for(j=k+1;j<=i;j++)
            arr[j-1] = arr[j];
         arr[i]=ch;
     }
}
int main()
{
    char arr[]="adobe";
    int len = strlen(arr);
    permutations(arr,0,len);
    printf("%d",count);
    getchar();
}
