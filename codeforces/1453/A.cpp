#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int m,n;
	    cin>>m>>n;
	    int a[m];
	    int b[n];
	    for(int i=0;i<m;i++)
	    cin>>a[i];
	    for(int i=0;i<n;i++)
	    cin>>b[i];
	    
	    unordered_map<int,int>m1;
	    for(int i=0;i<m;i++)
	    {
	        m1[a[i]]++;
	       // cout<<a[i];
	    }
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        if(m1[b[i]])
	        count++;
	        else m1[b[i]]++;
	    }
	   cout<<count<<endl;
	    
	}
	return 0;
}
