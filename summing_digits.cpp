#include<iostream>
using namespace std;

void issumming(int n)
{
    int dig,sums=0;
    if(n%10==n)
    {
        cout<<n<<endl;
    }else
    {
        while(n>0)
        {
            dig = n%10;
            sums += dig;
            n /= 10;
        }

        if(sums>=9)
        {
            issumming(sums);
        }
        else{
            cout<<sums<<endl;
        }
    }
}
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        else
        {
            issumming(n);
        }
    }
    return 0;
}