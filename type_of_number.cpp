#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
     int n,num,i,sum=0;
    cout<<"PERFECTION OUTPUT"<<endl;
    while(scanf("%d", &n),n)
    {
        for(i=1;i<=n/2;i++) // n=n/2
        {
            
            if(n%i==0)
            {
                sum += i;
            }
        }
        if(sum==n)
        {
            cout<<n<<" "<<"PERFECT"<<endl;
        }
        else if(sum>n)
        {
            cout<<n<<" "<<"ABUNDANT"<<endl;
        }
            else
            {
                cout<<n<<" "<<"DEFICIENT"<<endl;
            }
        
        sum=0;
    }    
        
    cout<<"END OF OUTPUT";
    return 0;
}