
#include <iostream>
#include <stdio.h>
#include<vector>
using namespace std;

int main()
{
    int n,num,cnt=0;
    
    while(cin>> n)
    {
        if(n==0)return 0;
        vector<int> v,t;
        while(n>0)
        {
           num = n%2;
           if(num==1)
           {
             cnt++;
           }
           v.push_back(num);  
           n = n/2;
        } 
        cout<<"The parity of ";
        for(int i=v.size()-1; i>=0; i--)
        {
         cout<<v[i];   //cout<<v[i];
        }
        cout<<" is ";
        cout<<cnt<<" (mod 2)."<<endl;
        cnt=0;
    }
    return 0;
}