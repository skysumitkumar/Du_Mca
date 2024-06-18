#include <iostream.h>

#define SIZE 8
#define isLimit(a) ((a)>=0 && (a)<=SIZE-1)

bool solution(int chess[][SIZE],int i,int j,int count)
{
     if(count == SIZE * SIZE)
              return true;
     for(int x=-2;x<=2;x++)
     {
             if(chess[i][j]==0)
             {
                     chess[i][j]=1;
                     count++;
                     bool status = solution(chess,i,j,count);
                             if(status == false)
                             {
                                       chess[i][j]=0;
                                       count--;
                             }else{
                                   cout<<i<<","<<j<<"\n";
                                   return true;
                             }
                     continue;
             }
             if(x==0)continue;
             
             int y = x>0? 3-x : 3+x;
             for(int z=1;z<=2;z++)
             {
                     int xPos = i+x;
                     int yPos = j+y;
                     if(isLimit(xPos) && isLimit(yPos) && chess[xPos][yPos]==0)
                     {
                             chess[xPos][yPos]=1;
                             count++;
                             bool status = solution(chess,xPos,yPos,count);
                             if(status == false)
                             {
                                       chess[xPos][yPos]=0;
                                       count--;
                             }else{
                                   cout<<xPos<<","<<yPos<<"\n";
                                   return true;
                             }
                     }
                     y*=-1;
             }
     }
     return false;
}
void solveHorsePuzzle()
{
     int chess[SIZE][SIZE]={0};
     int count=0;
     int i=0,j=0;
     if(solution(chess,i,j,count))
     {
          cout<<"solution in reverse order ";
     }else{
           cout<<"no soln";
     }
}
int main()
{
    solveHorsePuzzle();
    getchar();
}
