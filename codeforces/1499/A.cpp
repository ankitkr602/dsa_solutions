#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k1,k2,w,b;
	    cin>>n>>k1>>k2>>w>>b;
	    int white=k1+k2;
	    int black=2*n-white;
	    if(white/2>=w && black/2>=b)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
