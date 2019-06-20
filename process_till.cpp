#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n!=42)
        {
            cout<<n<<endl;
        }else
        {
            break;
        }
    }
    return 0;
}
