#include<iostream>

using namespace std;

/*
�����ĸ��������
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
        //���ƿո�
        for(int s=8-i; s>0; s--)  //s:space
            cout<<" ";
        //����ǰ�����
        for(int f=0; f<=i;f++)   //f:forward
            cout<<(char)('A'+f);
        //���ƺ������
        for(int b=i-1; b>=0;b--)  //b:back
            cout<<(char)('A'+b);
        cout<<endl;
    }
    return 0;
}
