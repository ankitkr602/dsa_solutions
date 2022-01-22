#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{   
	    int n,k;
	    cin>>n>>k;
	    vector<pair<int,int>>v;
	    for(int i=0;i<n;i++)
	    {
	        int x,y;
	        cin>>x>>y;
            v.push_back(make_pair(x,y));       
	    }
	    int ans=-1;
	    for(int i=0;i<n;i++)
	    {    int p=0;
	        for(int j=0;j<n;j++)
	        {
	            if(i!=j )
	            {
	               int p1=abs(v[i].first-v[j].first)+abs(v[i].second-v[j].second);
	               if(p1>k){
	               p=1;
	               break;}
	        }
	        
	    }
	    if(p!=1){
	    ans=1;
	    break;}
	    
	}
	cout<<ans<<endl;
	}
	return 0;
}
