#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
    //֮ǰ����Ϊs[1001],�ύʱ��Runtime Error����Ϊ���������С��������������1001��Խ�磻
    //����Ϊs[10000001]��codeblock���б���
    char s[1000001];
    int len,newlen;
    while(gets(s))
    {
        int cnt = 0;
        len = strlen(s);
        for(int i=0; i<len; i++)
        {
            if(s[i] == ' ')
                cnt++;
        }
        newlen = 2*cnt + len;
        while(len!=newlen && len>=0)
        {
            if(s[len] == ' ')
            {
                s[newlen--] = '0';  //�ȸ�ֵ��--���磺s[newlen--] = 0.��newlen=7����s[7]=0,s[6]=2,s[5]=%,�ո��滻���
                s[newlen--] = '2';
                s[newlen--] = '%';
                len--;
            }
            else
            {
                s[newlen] = s[len];
                newlen--;
                len--;
            }
        }
        newlen = strlen(s);
        for(int i=0; i<newlen; i++)
        {
            //֮ǰ����д��%s��Ȼ��һ���оͱ�����һ��ʼ����Ϊ��ǰ������⣻
            //������ӡǰ���һЩ��ֵ������û�д�����ͻȻ��������д���ˡ���
            printf("%c",s[i]);
        }
        printf("\n");
    }
    return 0;
}
