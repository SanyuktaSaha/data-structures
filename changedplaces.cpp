#include<iostream>
#include<algorithm>                      changedplaces.cpp
#include<vector>
using namespace std;

int main()
{
    int t,n,k;
    
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        vector<long long int> v; 
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
            v.push_back(arr[i]);
        }
        cin>>k;
        int num = v[k-1];
        sort(v.begin(),v.end());
        
        for(int i=0;i<n;i++)
        {
            if(num==v[i])
            {
                cout<<i+1<<endl;
            }
        }
        
        //cout<<arr[k]<<endl;
    }
    return 0;
}