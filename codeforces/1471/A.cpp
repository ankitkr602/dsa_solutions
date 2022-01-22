#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    double x;
	    cin>>n>>x;
	    long long sum=0,sum2=0;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        sum=sum+a[i];
	        sum2=sum2+ceil(a[i]/x);
	        //cout<<sum2;
	    }
	    sum=ceil(sum/x);
	    cout<<sum<<" "<<sum2<<endl;
	    
	}
	return 0;
}