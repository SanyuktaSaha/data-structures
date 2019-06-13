#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;

int main()
{
    int n,m,ans,k=1;
    while(scanf("%d %d",&n,&m),n,m)
    {
        ans = floor((n-1)/m);
        if(ans<=26)
        {
            printf("Case %d: %d\n",k,ans);                                 
            k++;
        }
        else
        {
            printf("Case %d: impossible\n",k);
            k++;
        }
    }
    return 0;
}