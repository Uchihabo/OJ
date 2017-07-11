#include<stdio.h>
#include<stack>

using namespace std;

int main()
{
    int num,i;
    stack<int> stack1;
    while(scanf("%d",&num))
    {
        if(num != -1)
        {
            stack1.push(num);
        }
        else
        {
            break;
        }
    }
    while(!stack1.empty())
    {
        printf("%d\n",stack1.top());
        stack1.pop();
    }
    return 0;
}
