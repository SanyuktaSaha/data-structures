#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t,n,k,i,j;
    
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>n>>k;
        int arr[n];
        int c=0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        i = 0;
        j = n-1;
        
        while(i<j)
        {
            if(arr[i]+arr[j] == k)
            {
                cout<<"Yes"<<endl;
                break;
            }
            else if(arr[i] + arr[j] > k)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        if(i==j)
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
