#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    if(n%2==0){
	        n=n/2;
	        if(n%2==0)
	        cout<<n<<" "<<n/2<<" "<<n/2<<endl;
	        else
	        cout<<"2"<<" "<<(n-1)<<" "<<(n-1)<<endl;
	    }
	    else
	    cout<<"1"<<" "<<(n-1)/2<<" "<<(n-1)/2<<endl;
	    }
	return 0;
}
