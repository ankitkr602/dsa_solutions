#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	   int n,c0,c1,h;
	   cin>>n>>c0>>c1>>h;
	   string s;
	   cin>>s;
	   int zeros=0,ones=0;
	   for(int i=0;i<s.length();i++)
	   {
	       if(s[i]=='0')
	       zeros++;
	       else
	       ones++;
	   }
	   long long mini=INT_MAX;
	   long long sum=(c0*zeros)+(c1*ones);
	   mini=min(mini,sum);
	   if(c0>c1)
	   {
	      long long p =zeros*h+c1*n;
	      mini=min(mini,p);
	   }
	   else
	   {
	       long long p=ones*h+c0*n;
	        mini=min(mini,p);
	   }
	   cout<<mini<<endl;
	}
	return 0;
}
