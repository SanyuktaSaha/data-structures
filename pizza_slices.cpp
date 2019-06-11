#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
    long long int n,ans,res;
    while(scanf("%lld",&n),n>=0)
    {
        ans = pow(n,2)+ n+ 2;
        res = ans/2;
        cout<<res<<endl;
    }
    return 0;
}
