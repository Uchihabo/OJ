#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
    //之前定义为s[1001],提交时抱Runtime Error，因为定义的数组小，测试用例大于1001，越界；
    //定义为s[10000001]则codeblock运行崩溃
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
                s[newlen--] = '0';  //先赋值后--，如：s[newlen--] = 0.若newlen=7，则s[7]=0,s[6]=2,s[5]=%,空格替换完毕
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
            //之前这里写成%s，然后一运行就崩溃，一开始还以为是前面的问题；
            //后来打印前面的一些数值，发现没有错，后来突然发现这里写错了……
            printf("%c",s[i]);
        }
        printf("\n");
    }
    return 0;
}
