include <iostream>
using namespace std;

int main()
{
    int t,n,i;
    
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n],flag=0;
        int cnt1=0;
        
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n;i++)
        {
             if(arr[i] == 1)
            {
                cnt1++;
            }
            if(arr[i] == 0)
            {
                cnt1--;
                if(cnt1 < 0)
                {
                    flag=1;
                    break;
                }
            }
            
        }
        
        if(flag==0)
        {
            cout<<"Valid"<<endl;
        }
        else
        {
            cout<<"Invalid"<<endl;
        }
        
    }
    return 0;
}

/*#include <iostream>
using namespace std;

int main()
{
    int t,n,i;
    
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n],flag=0;
        int cnt1=0,cnt2=0;
        
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n;i++)
        {
             if(arr[i] == 1)
            {
                cnt1++;
            }
            if(arr[i] == 0)
            {
                cnt2++;
            }
            
            if((cnt1>cnt2) || (cnt1==cnt2))
            {
                flag=0;
            }
            else
            {
                flag=1;
                break;
            }
        }
        
        if(flag==0)
        {
            cout<<"Valid"<<endl;
        }
        else
        {
            cout<<"Invalid"<<endl;
        }
        
    }
    return 0;
}
*/
