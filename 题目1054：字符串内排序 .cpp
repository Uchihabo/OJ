#include <stdio.h>
#include <algorithm>
#include <string.h>

using namespace std;

int main()
{
    char s[201];
    while(scanf("%s",&s) != EOF)
    {
        int len = strlen(s);
        sort(s,s+len);
        printf("%s\n",s);
    }
    return 0;
}

/**************************************************************
    Problem: 1054
    User: ฮาหต
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1020 kb
****************************************************************/
