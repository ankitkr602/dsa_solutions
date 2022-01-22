#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    long long sum=0,sum2=0;
	    int a[n];
	    queue<int>v;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        sum=sum+a[i];
	    }
	   int b[n];
	   for(int i=0;i<n;i++)
	   b[i]=a[i];
	   int i=0;
	  while(b[i%n]%x==0)
	  {
	      if(b[i%n]%x==0)
	     {
	         b[i%n]=b[i%n]/x;
	         sum=sum+a[i%n];
	     }
	     i++;
	  }
	  cout<<sum<<endl;
	    
	}
	return 0;
}
