#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;

	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    int elements=abs(a-b)-1;
	    int el=min(a,b)-1;
	    if(el>elements)
	    cout<<-1<<endl;
	    else
	    {
	        int maxi_limit=max(a,b)+elements-el;
	        if(c>maxi_limit)
	        cout<<-1<<endl;
	        else
	          {
	              if(c+abs(a-b)<=maxi_limit)
	              cout<<c+abs(a-b)<<endl;
	              else
	              cout<<c-abs(a-b)<<endl;
	          }
	    }
	   
	    //cout<<a[k-1]<<endl;
	}
	return 0;
}
