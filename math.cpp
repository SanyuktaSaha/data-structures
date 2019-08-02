#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0)
	{
	    int n,sums=0,max=0;
	    cin>>n;
	    
	    int crr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>crr[i];
	    }
	    
	        
	        for(int i=0;i<n-1;i++)
	        {
	            for(int j=i+1;j<n;j++)
	            {
	                int ans = crr[i] * crr[j];
	                while(ans>0)
	                {
	                 int dig = ans%10;
	                 sums += dig;
	                 ans /= 10;
	                }
	               
	                if(sums>max)
	                {
	                   max=sums;
	                }
	                sums=0;
	            }
	        }
	        cout<<max<<endl;
	    t--;
	}
	return 0;
}