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
	     string s;
	     cin>>s;
	     int count=0;
	     for(int i=n-1;i>=0;i--)
	     {
	         if(s[i]!=')')
	         break;
	         else 
	         count++;
	     }
	     if(count>n-count)
	     cout<<"YES"<<endl;
	     else
	     cout<<"NO"<<endl;
	 }
	return 0;
}
