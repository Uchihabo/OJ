#include <stdio.h>
 
using namespace std;
 
int arr[1000][1000];
 
void MatchNum(int r,int c,int target)
{
    int row = 0, col = c-1;
    while(col >= 0 && row < r)
    {
        if(arr[row][col] > target)
        {
             --col;
        }   
        else if(arr[row][col] < target)
        {
            ++row;
        }
        else
        {
            printf("Yes\n");
            return;
        }
    }
    printf("No\n");
}
 
int main()
{
    int row,column,target;
    while(scanf("%d %d",&row,&column) != EOF)
    {
        scanf("%d",&target);
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < column; j++)
                scanf("%d",&arr[i][j]);
        }
        MatchNum(row,column,target);
     }
     return 0;
}
 
/**************************************************************
    Problem: 1384
    User: ฮาหต
    Language: C++
    Result: Accepted
    Time:680 ms
    Memory:4928 kb
****************************************************************/