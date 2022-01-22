#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes 
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    int a[n];
	    int sum[n+1]={0};
	    int sum_rev[n+1]={0};
	    for(int i=0;i<n;i++){
	    cin>>a[i];
	    sum[i+1] =sum[i]+a[i];
	    }
	    for(int i=0;i<n;i++)
	    sum_rev[i+1]=sum_rev[i]+a[n-i-1];
	    
	    int count=0,len=INT_MIN;
	    for(int i=0;i<n;i++)
	    {
	        if((sum[n]-sum[i])%x!=0)
	        {
	            count++;
	            len=max(len,n-i);
	        }
	        if((sum[n]-sum_rev[i])%x!=0)
	        {
	            count++;
	            len=max(len,n-i);
	        }
	        if((sum[n]-sum[i]-sum_rev[i])%x!=0)
	        {
	            count++;
	            len=max(len,n-2*i);
	        }
	    }
	    if(count==0)
	    cout<<-1<<endl;
	    else
	    cout<<len<<endl;
	}
}

