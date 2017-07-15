#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n) !=EOF)
    {
        long long int a[n];
        for(int i=0; i<n; i++)
        {
            scanf("%lld",&a[i]);
        }
        for(int i=n-1; i>=0; i--)
        {
            if(i != 0)
            {
                printf("%lld ",a[i]);
            }
            else
            {
                printf("%lld\n",a[i]);
            }
        }
    }
    return 0;
}
