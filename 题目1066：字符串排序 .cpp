#include<stdio.h>
#include<string.h>
#include<algorithm>

using namespace std;

bool compare(char a,char b)
{
    return a < b; //这道题目的知识点主要在这个return，其实不加这个函数，sort（）去掉第三个参数也能完成排序
}

int main()
{
    char st[21];
    while(scanf("%s",&st) != EOF)
    {
        sort(st,st + strlen(st),compare);
        printf("%s\n",st);
    }
    return 0;
}
