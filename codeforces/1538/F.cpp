#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int l,r;
	    cin>>l>>r;
	    long long num1=0,num2=0;
	    int l1=l,r1=r;
	    int l_count=0,r_count=0;
	    while(l1!=0)
	    {
	        l_count++;
	        l1=l1/10;
	    }
	     while(r1!=0)
	    {
	        r_count++;
	        r1=r1/10;
	    }
	    int diff1=0;
	    for(int i=l_count;i>=2;i--)
	    {
	        num1 +=((int)(l/pow(10,(i-1)))-diff1)*(9+i);
	        diff1 =(int)(l/pow(10,(i-1)));
	    }
	    num1 +=l%10;
	    //cout<<num1<<" ";
	    int diff2=0;
	    //cout<<r_count;
	     for(int i=r_count;i>=2;i--)
	    {
	        num2 +=(int(r/pow(10,(i-1)))-diff2)*(9+i);
	        diff2 =(int)(r/pow(10,(i-1)));
	    }
	    num2 +=r%10;
	    //cout<<num2<<" ";
	    cout<<num2-num1<<endl;
	}
	return 0;
}
