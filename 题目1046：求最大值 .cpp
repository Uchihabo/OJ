#include <stdio.h>
 
using namespace std;
 
int main()
{
    int max,first,leftover,i;
    while(scanf("%d",&first) != EOF)
    {
        max = first;
        for(i = 0; i < 9; i++)
        {
            scanf("%d",&leftover);
            if(leftover > max)
                max = leftover;
        }
        printf("max=%d\n",max);
    }
    return 0;
}
 
/**************************************************************
    Problem: 1046
    User: ฮาหต
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1020 kb
****************************************************************/