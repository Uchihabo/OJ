#include <stdio.h>
#include <string.h>

using namespace std;

typedef struct TreeNode
{
    int data;
    TreeNode *lchild;
    TreeNode *rchild;
}Node;

Node* BuildTree(int *pre,int *in,int length)
{
    if(length == 0)
        return NULL;
    Node *node = new Node;
    node->data = pre[0];
    int root = -1; //和1078号题目不一样，这里必须是小于0的值，因为root=0可能是叶子节点，非0值用来判断是否能够建立起二叉树
    for(int i = 0; i < length; i++)
    {
        if(in[i] == pre[0])
        {
            root = i;
            break;
        }
    }
    if(root == -1)
        return NULL;
    node->lchild = BuildTree(pre+1,in,root);//left
    node->rchild = BuildTree(pre+1+root,in+1+root,length-root-1);//right
   // printf("%d ",node->data);//root
    return node;
}

void behind(Node *root)
{
    if(root != NULL)
    {
        behind(root->lchild);
        behind(root->rchild);
        printf("%d ",root->data);
    }
}

int realcount(Node *root)
{
    int n = 0;
    if(root != NULL)
    {
        n++;
        n += realcount(root->lchild);
        n += realcount(root->rchild);
    }
    return n;
}

int main()
{
    int n;
    int pre[1000],in[1000];
    while(scanf("%d",&n) != EOF)
    {
        for(int i = 0; i < n; i++)
        {
            scanf("%d",&pre[i]);
        }
        for(int j = 0; j < n; j++)
        {
            scanf("%d",&in[j]);
        }

        Node* root =  BuildTree(pre,in,n);
        if(realcount(root) != n)
            printf("No");
        else
           behind(root);
        printf("\n");
    }
    return 0;
}

/**************************************************************
    Problem: 1385
    User: 我说
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1024 kb
****************************************************************/
