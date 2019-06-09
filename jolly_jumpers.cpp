#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long  n,i,p[1000],l=0,q[1000],flag=0,ans;
    
    while(scanf ("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            cin>>p[i];
        }
        for(i=0;i<n-1;i++)
        {
            q[i]=abs(p[i+1]-p[i]);
            l++;
        }
        
        for(i=0;i<l;i++)
        {
            ans = abs(q[i+1]-q[i]);
            if(ans>=0 && ans<=1)
            {
                flag=0;
                continue;
            }else
            {
                flag=1;
                break;
            }
        }
        
        if(flag==0)
        {
            cout<<"Jolly"<<"\n";
        }else
        {
            cout<<"Not Jolly"<<"\n";
        }
    }
    return 0;
}