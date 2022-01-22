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
	    int area[n];
	    for(int i=0;i<n;i++)
	    {
	        area[i]=0.5*1*a[i];
	    }
	    unordered_map<int,int>m;
	    for(int i=0;i<n-1;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        {
	            if(m[abs(a[j]-a[i])]==0)
	            m[abs(a[j]-a[i])]++;
	        }
	    }
	    cout<<m.size()<<endl;
	}
	return 0;
}
