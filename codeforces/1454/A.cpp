#include <bits/stdc++.h>
using namespace std;

bool comparator(int a ,int b)
{
    return a>b;
}

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
	   a[i]=i+1;
	   sort(a,a+n,greater<int>());
	   if(n%2!=0)
	   {
	       swap(a[n/2],a[n-1]);
	   }
	    for(int i=0;i<n;i++)
	    cout<<a[i]<<" ";
	   cout<<endl; 

	}
	return 0;
}
