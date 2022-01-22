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
	    int a[n+1];
	    a[n]=-1;
	    vector<int>v;
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    sort(a,a+n);
	    if(a[0]>0)
	    {
	        for(int i=0;i<n;i++)
	        cout<<a[i]<<" ";
	    }
	    else{
	    int j=1,i=0;
	    while(i<n)
	    {
	        if(a[i]==a[j]){
	        v.push_back(a[i]);
	       }
	        else
	        {
	            cout<<a[i]<<" ";
	           
	        }
	         j++;
	         i++;
	    }
	   
	    for(int k=0;k<v.size();k++)
	    cout<<v[k]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
