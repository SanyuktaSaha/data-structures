#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,average=0,l=0;
    while(scanf("%d",&n)!=EOF)
    {
        l++;
        average = average + n;
    }
    int result;
    result = average / l;
    cout<<result;
    return 0;
}
