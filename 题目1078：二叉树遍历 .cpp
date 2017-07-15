#include <stdio.h>
#include <string.h>
 
using namespace std;
 
typedef struct TreeNode
{
    char data;
    TreeNode *lchild;
    TreeNode *rchild;
}Node;
 
void BuildTree(char *pre,char *in,int length)
{
    if(length == 0)
        return;//之前这里写成了return 0；编译的时候才发现函数定义是void…
    Node *node = new Node;
    node->data = pre[0];
    int root = 0; // root的值随意确定，因为在下面会重新赋值root=i
    for(int i = 0; i < length; i++)
    {
        if(in[i] == pre[0])
        {
            root = i;
            break;
        }
    }
    BuildTree(pre+1,in,root);//left
    BuildTree(pre+1+root,in+1+root,length-root-1);//right
    printf("%c",node->data);//root
}
 
int main()
{
    char pre[26],in[26];
    while(scanf("%s\n%s",pre,in) != EOF)
    {
        BuildTree(pre,in,strlen(pre));
        printf("\n");
    }
    return 0;
}
 
/**************************************************************
    Problem: 1078
    User: 我说
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1024 kb
****************************************************************/