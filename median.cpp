#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> v;
    int n,mid,ans;
    
    while(scanf("%d", &n) != EOF)
    {
        v.push_back(n);
         sort(v.begin(), v.end());
        if(v.size()%2!=0)
        {
            mid = v.size()/2;
            cout<<v[mid]<<endl;
        }
        else
        {
            ans = (v[(v.size()+1)/2-1]+v[(v.size()+1)/2])/2;
            cout<<ans<<endl;
        }
    }
    return 0;
}
