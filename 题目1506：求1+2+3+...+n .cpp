#include <stdio.h>
 
using namespace std;
 
int getNum(int num,int &sum)
{
    num && getNum(num-1,sum);
    return sum += num;
}
 
int main()
{
    int num;
    while(scanf("%d",&num) != EOF)
    {
        int sum = 0;
        printf("%d\n",getNum(num,sum));
    }
    return 0;
}
 
/**************************************************************
    Problem: 1506
    User: ฮาหต
    Language: C++
    Result: Accepted
    Time:550 ms
    Memory:1320 kb
****************************************************************/