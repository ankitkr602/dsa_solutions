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
	    vector<int>v;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	   // cout<<minindex<<maxindex;
	   v.push_back(a[0]);
	    for(int i=1;i<n-1;i++)
	    {
	        if(a[i]>a[i+1] && a[i]>a[i-1])
	        v.push_back(a[i]);
	        if(a[i]<a[i+1] && a[i]<a[i-1])
	        v.push_back(a[i]);
	    }
	    v.push_back(a[n-1]);
	    cout<<v.size()<<endl;
	    for(int i=0;i<v.size();i++)
	    cout<<v[i]<<" ";
	    cout<<endl;
}
return 0;
}
