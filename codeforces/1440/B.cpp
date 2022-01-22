#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	   double n,k;
	   cin>>n>>k;
	   long long sum=0;
	   int p=n*k;
	   int a[p];
	   for(int i=0;i<p;i++)
	   cin>>a[i];
	   int t1=ceil(n/2)-1;
	   int t=t1*k;
	   int l=n-t1;
	   for(int i=t;i<p;i=i+l)
	   {   
	       sum=sum+a[i];
	   }
	   cout<<sum<<endl;
	  
	}
	return 0;
}
