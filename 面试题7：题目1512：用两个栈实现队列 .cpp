#include<stdio.h>
#include<stack>
#include<string.h> //C++标准库里面没有strcmp，所以头文件必须是string.h而不是string

using namespace std;

int main()
{
    int n,i;
    while(scanf("%d",&n) != EOF)
    {
        stack<int> stack1;
        stack<int> stack2;
        for(i = 0; i < n; i++)
        {
            char operate[5];
            scanf("%s",operate);
            if(strcmp(operate , "PUSH") == 0)
            {
                int num;
                scanf("%d",&num);
                stack1.push(num);
            }
            else
            {
                if(!stack2.empty())
                {
                    printf("%d\n",stack2.top());
                    stack2.pop();
                }
                else
                {
                    if(stack1.empty())
                    {
                        printf("-1\n");
                    }
                    else
                    {
                        while(!stack1.empty())
                        {
                            int top = stack1.top();
                            stack2.push(top);
                            stack1.pop();
                        }
                        printf("%d\n",stack2.top());
                        stack2.pop();
                    }
                }
            }
        }
    }
    return 0;
}
