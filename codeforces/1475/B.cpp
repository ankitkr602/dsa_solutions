#include <iostream>
using namespace std;



int main() {
	// your code goes her
	int t;
	cin>>t;
	while(t--)
	{
	    long long n;
	    cin>>n;
	    int p=n/2020;
	    int q=n%2020;
	    int j=(n-q*2021);
	    if(q*2021==n)
	    cout<<"YES"<<endl;
	    else if(j%2020==0 && j>0)
	    cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	    
	}
}
