#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    int a[n];
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int b[m]={0};
	   
	    for(int i=0;i<n;i++)
	    {
	       
	        b[(a[i]%m)]++;
	    }
	  /*  for(int i=0;i<m;i++)
	    cout<<b[i]<<" ";*/
	    
	    for(int i=1;i<=(m/2);i++)
	    {
	        if(b[i]>0 &&b[m-i]>0)
	        {//cout<<i;
	            
	            int d=abs(b[i]-b[m-i]);
	            if(d==0)
	            {
	                count++;
	                //cout<<count<<"=";
	            }
	            else if(d>0)
	            {
	              count++;
	              count=count+d-1;
	              //cout<<count<<"=g";
	            }
	           
	        }
	        else 
	        {
	             int d=abs(b[i]-b[m-i]);
	             count=count+d;
	        }
	    }
	    if(b[0]>0)
	    count++;
	    cout<<count<<endl;
	}
	return 0;
}
