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
	    if(n>3){
	        int k=0;
	        cout<<"989";
	        for(int i=1;i<=n-3;i++){
	            cout<<k;
	            if(k==9)
	            k=0;
	            else k++;
	        }
	    }
	    if(n==1)
	    cout<<"9";
	    else if(n==2)
	    cout<<"98";
	    else if(n==3)
	    cout<<"989";
	    cout<<endl;
	}
	return 0;
}
