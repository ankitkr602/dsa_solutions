#include <bits/stdc++.h>
using namespace std;

long long gcd(int a,int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
      string s,s1;
      cin>>s>>s1;
      long long p=lcm(s.length(),s1.length());
      
        string str=s,str1=s1;
        while(str.length()<p) { 
            str=str+s;}
      
       while(str1.length()<p) { 
            str1=str1+s1;}
            
      if(str1==str)
      cout<<str<<endl;
      else 
      cout<<-1<<endl;
     
	}
        return 0;
}
