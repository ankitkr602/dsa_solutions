#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
      int n;
      cin>>n;
      int a[n];
      unordered_map<int,int>m;
      int flag=0;
      for(int i=0;i<n;i++){
      cin>>a[i];
      m[a[i]]++;
      }
      for(auto itr=m.begin();itr!=m.end();itr++)
      {
          if(itr->second>1)
          {
              flag =1;
              break;
          }
      }
      if(flag==0)
      cout<<"NO"<<endl;
      else
      cout<<"YES"<<endl;
	}
        return 0;
}
