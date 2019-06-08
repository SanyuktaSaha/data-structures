#include <iostream>
using namespace std;

int main()
{
    int i,j,t,a,f,k;
    cin>>t;
    //cout<<"\n";
  while(t>0)
  {
        cin>>a;
        cin>>f;
        
      while(f>0)
     {
         for(i=1;i<=a;i++)
         {
             for(j=1;j<=i;j++)
             {
                 cout<<i;
             }
             cout<<"\n";
         }
         for(i=a-1;i>0;i--)
         {
            for(k=1;k<=i;k++)
            {
                cout<<i;
            }
            cout<<"\n";
         }
         f--;
         cout<<"\n";
     } 
     t--;
  }
    return 0;
}
