#include<stdio.h>
#include<string.h>
#include<algorithm>

using namespace std;

bool compare(char a,char b)
{
    return a < b; //�����Ŀ��֪ʶ����Ҫ�����return����ʵ�������������sort����ȥ������������Ҳ���������
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
