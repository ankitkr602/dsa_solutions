#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int a[1000]={0};
	while(t--)
	{
	    int k,i=0;
	    cin>>k;
	    int n=1;
	    while(i<1000)
	    {
	        if(n%3!=0 && n%10!=3){
	        a[i]=n;
	        i++;
	        }
	        n++;
	        
	    }
	    cout<<a[k-1]<<endl;
	}
	return 0;
}
