#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
       string s="";int i;
       for(i=1;i<=k;i++)
       s=s+'a';
       int m=(n-i+1)%3;
       while(i<=n && (n-i+1)>=3)
       {
          s="abc"+s;
          i=i+3;
       }
       if(m==1)
       s='c'+s;
       if(m==2)
       s="bc"+s;
       cout<<s<<endl;
       
       
        
    }
}