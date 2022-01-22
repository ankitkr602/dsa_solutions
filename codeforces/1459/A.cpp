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
	    string red,blue;
	    cin>>red>>blue;
	    long long sum=0;
	     for(int i=0;i<n;i++)
	    {
	       if((red[i]-'0')-(blue[i]-'0')>0)
	       sum++;
	       else if((red[i]-'0')-(blue[i]-'0')<0)
	       sum--;
	    }
	    //cout<<sum<<endl;
	    if(sum>0)
	   cout<<"RED"<<endl;
	   else if(sum<0)
	   cout<<"BLUE"<<endl;
       else
       cout<<"EQUAL"<<endl;
	}
	return 0;
}
