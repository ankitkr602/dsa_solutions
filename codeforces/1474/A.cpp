#include <bits/stdc++.h>
using namespace std;



int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    string s;
	    cin>>n;
	    cin>>s;
	    int prev=(s[0]-'0')+1;
	    cout<<1;
	    for(int i=1;i<n;i++)
	    {
	        if(((s[i]-'0')+1)!=prev)
	        {
	        cout<<1;
	            prev=(s[i]-'0')+1;
	        }
	        else{
	        cout<<0;
	        prev=(s[i]-'0');
	        }
	    }
	    cout<<endl;
	}
     
}
