#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,d;
	    cin>>a>>b;
	    if(a%b==0)
	    cout<<"0"<<endl;
	    else
	   { d=a%b;
	    cout<<(b-d)<<endl;}
	}
	return 0;
}
