void fun(int arr[],int i,int n,int size)
{
    while(1){
    
    if(i==0 || arr[i]>arr[i-1])
    {
        arr[i]++;
        if(i!=n-1)
           arr[i+1]=-1; 
    }
    else 
    {
         arr[i]=arr[i-1]+1;
    }
    
    if(arr[i]>size)
        return ;
    
    if(i<n-1)
             fun(arr,i+1,n,size);
    if(i==n-1)
    {
              printf("\n");
              int j,k;
              for(j=0;j<n;j++)
              {
               printf("%d ",arr[j]);
               }
    }
    
    }
}

void main()
{
     int size=6;
     int i;
     for(i=0;i<size;i++)
     {
        int arr[6]={0};
        fun(arr,0,i+1,size);
     }
     getchar();
}
