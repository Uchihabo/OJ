#include <iostream>
#include <stdio.h>
 
using namespace std;
 
//��10000��������104729��������Ҫ�������ֵ��֮ǰ��һֱ�����鶨��Ϊk�����ֵ��Ȼ��һֱ������
#define MaxNum 105000 
 
int main()
{
    int k,i,j,num_th;
    int arr[MaxNum] = { 0 };
    while(scanf("%d",&k) != EOF)
    {
        arr[0] = 1;//ǰ��λ���⣬���Ե�����ֵ
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
    User: ��˵
    Language: C++
    Result: Accepted
    Time:40 ms
    Memory:1860 kb
****************************************************************/