#include <iostream>
using namespace std;

int main()
{
    long int n,s,d;
    cin>>n;
    while(n--)
    {
        cin>>s>>d;
        if(d>s)
        {
            cout<<"impossible"<<endl;
        }
        else
        {
            long int a = (s+d)/2;
            long int b = a-d;
            
            if(a<0 || b<0 || (a<0 && b<0) || (a+b!=s))
            {
                cout<<"impossible"<<endl;
            }
            else
            {
                cout<<a<<" "<<b<<endl;
            }
        }
    }
    return 0;
}
