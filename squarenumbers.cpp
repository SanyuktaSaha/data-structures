//1st method

#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int a,b,cnt=0;
    while(cin>>a>>b)
    {
        if(a==0 && b==0)
        {
            break;
        }
        else
        {
           for(int i=a;i<=b;i++)
           {
              for(int j=1 ; j<=i ;j++)
              {
                 if(j*j==i)
                 {
                     cnt++;
                 }
              }
           }
           cout<<cnt<<endl;   
        }
        cnt=0;
        
    }
    return 0;
}

//2nd method

#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
    int a,b,cnt=0;
    while(cin>>a>>b)
    {
        if(a==0 && b==0)
        {
            break;
        }
        else
        {
           for(int i=a;i<=b;i++)
           {
              int temp = sqrt(i);
              if(i == pow(temp,2))
              {
                  cnt++;
              }
           }
           cout<<cnt<<endl;   
        }
        cnt=0;
        
    }
    return 0;
}