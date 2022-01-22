#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;

	while(t--)
	{
	    int a;
	    cin>>a;
	    long long p=ceil(sqrt(a));
	    //cout<<p;
	    long long j=((p-1)*(p-1))+1;
	    long long dist1=(p*p)-a;
	    long long dist2=a-j;
	    if(dist1<dist2)
	    cout<<p<<" "<<dist1+1<<endl;
	    else
	    cout<<dist2+1<<" "<<p<<endl;
	}
	return 0;
}
