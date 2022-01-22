#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int sum=0;
	    int ones=0;
	    int twos=0;
	    for(int i=0;i<n;i++)
	    {
	      if(a[i]==1) 
	      ones++;
	      else
	      twos++;
	    sum=sum+a[i];
	        
	    }
	    if(sum%2!=0)
	    cout<<"NO"<<endl;
	    
	   else if(twos!=0 && ones==0)
	   {
	       if(twos%2==0)
	       cout<<"YES"<<endl;
	       else
	       cout<<"NO"<<endl;
	   }
	    else if(twos==0 && ones!=0)
	   {
	       if(ones%2==0)
	       cout<<"YES"<<endl;
	       else
	       cout<<"NO"<<endl;
	   }
	    
	    else if(twos%2==0 && ones%2==0 )
	    cout<<"YES"<<endl;
	     else if(twos%2!=0 && ones%2==0)
	    cout<<"YES"<<endl;
	     else if(twos%2==0 && ones%2!=0)
	    cout<<"NO"<<endl;
	     else if(twos%2!=0 && ones%2!=0)
	    cout<<"NO"<<endl;
	   
	   
	}
	return 0;
}
