#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int w,h,n;
	    cin>>w>>h>>n;
	    long long sum=1;
	    while(w%2==0 || h%2==0)
	    {
	        if(w%2==0)
	        {
	            sum=sum*2;
	            w=w/2;
	        }
	        else if(h%2==0)
	        {sum=sum*2;
	        h=h/2;
	        }
	    }
	    if(sum>=n)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	   
	}
	return 0;
}
