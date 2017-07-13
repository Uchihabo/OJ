#include <iostream>
#include <stdio.h>
 
using namespace std;
 
//第10000个素数是104729，故数组要大于这个值，之前我一直把数组定义为k的最大值，然后一直报错……
#define MaxNum 105000 
 
int main()
{
    int k,i,j,num_th;
    int arr[MaxNum] = { 0 };
    while(scanf("%d",&k) != EOF)
    {
        arr[0] = 1;//前三位特殊，所以单独赋值
        arr[1] = 1;
    arr[2] = 0;
        for(i = 2; i <= MaxNum; i++)
        for(j = 2; j <=MaxNum && j * i <= MaxNum; j++)
            arr[i * j] = 1;
    num_th = 0;
    i = 0;
    while(num_th < k)
    {
        if(arr[i] == 0)
            num_th++;
        i++;
    }
    printf("%d\n",i-1);
    }
    return 0;
}
 
/**************************************************************
    Problem: 1040
    User: 我说
    Language: C++
    Result: Accepted
    Time:40 ms
    Memory:1860 kb
****************************************************************/