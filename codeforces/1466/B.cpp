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
	        cin>>a[i];
	     unordered_map<int,int>m;
	    for(int i=0;i<n;i++)
	    {
	        if(m[a[i]]==0)
	        m[a[i]]++;
	        else
	        m[a[i]+1]++;
	    
	    }
	    
	    cout<<m.size()<<endl;
	}
	return 0;
}
