void move(int n,int start,int temp,int final,int arr[])
{
     if(n>=0)
     {
            move(n-1,start,final,temp,arr);
            printf("move disk %d from %d to %d \n",arr[n],start,final);
            move(n-1,temp,start,final,arr);
     }
}
void hanoi(int arr[],int size,int start,int temp,int final)
{
     /* preprossesing */
     int * finalArray = (int *)malloc(sizeof(size*sizeof(int)));
     int i=0;
     for(i=0;i<size;i++)
         finalArray[i]=0;
     
     // main logic
     i=0;
     while(i<size)
     {
       int j;
       for(j=i;j>0;j--)
       {
           if(finalArray[j-1] > arr[i])
              finalArray[j] = finalArray[j-1];
           else
               break;
       }
       move(j-1,final,start,temp,finalArray);
       printf("move disk %d from %d to %d \n",arr[i],start,final);
       finalArray[j]= arr[i];
       move(j-1,temp,start,final,finalArray);
       i++;
     }     
}
int main()
{
    int disk[]={3,1,5,4,2};
    int size = sizeof(disk)/sizeof(disk[0]);
    hanoi(disk,size,1,2,3);
    getchar();
}
