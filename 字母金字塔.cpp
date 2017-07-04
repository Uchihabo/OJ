#include<iostream>

using namespace std;

/*
输出字母金字塔：
       A
      ABA
     ABCBA
    ABCDCBA
   ABCDEDCBA
*/
int main()
{
    for(int i=0; i<5; i++)
    {
        //控制空格
        for(int s=8-i; s>0; s--)  //s:space
            cout<<" ";
        //控制前面输出
        for(int f=0; f<=i;f++)   //f:forward
            cout<<(char)('A'+f);
        //控制后面输出
        for(int b=i-1; b>=0;b--)  //b:back
            cout<<(char)('A'+b);
        cout<<endl;
    }
    return 0;
}
