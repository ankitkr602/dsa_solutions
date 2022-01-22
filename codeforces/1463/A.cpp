#include <iostream>
using namespace std;
/*for(int i=0;i<n;i++)
{
    
}
*/
int main() {
	// your code goes here
	int t;
	cin>>t;
	 while(t--)
	 {
	     int a,b,c;
	     cin>>a>>b>>c;
	     long long sum=0;
	     sum=a+b+c;
	     long long k=sum/9;
	     if(sum%9==0)
	     {
	         a-=k;
	         b-=k;
	         c-=k;
	         if(a>=0 && b>=0 && c>=0)
	         cout<<"YES"<<endl;
	         else 
	         cout<<"NO"<<endl;
	     }
	     else
	     cout<<"NO"<<endl;
	 }
	     
	    
	return 0;
}
