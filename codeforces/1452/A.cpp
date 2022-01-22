#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int mini=min(x,y);
        int result=2*mini;
        x-=mini;
        y-=mini;
        int k=x>y?x:y;
        if(k)
        {
         k--;
         result+=k*2+1;
        }
        cout<<result<<endl;
        
    }
}