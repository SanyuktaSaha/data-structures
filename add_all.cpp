#include<iostream>
#include<queue>
#include<stdio.h>
using namespace std;

int main()
{
    int n,a;
    
    while(scanf("%d",&n),n)
    {
        int sum=0,i,c,d,b;
        priority_queue<int> pq;
        for(i=0;i<n;i++)
        {
            cin>>a;
            pq.push(-a);
        }
        for(i=0;i<n-1;i++)
        {
           d = -pq.top();
           pq.pop();
           b = -pq.top();
           pq.pop();
           c = d+b;
           sum += c;
           pq.push(-c);
        }
        cout<<sum<<endl;
    }
    return 0;
}
