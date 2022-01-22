#include <iostream>
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
	    int i=0;
	    int l=n-1;
	    while(i<=l)
	    {
	        if(i!=l)
	        cout<<a[i]<<" "<<a[l]<<" ";
	        else
	        cout<<a[i];
	        i++;
	        l--;
	    }
	    cout<<endl;
	}
	return 0;
}
