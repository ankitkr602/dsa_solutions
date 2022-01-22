#include <bits/stdc++.h>
using namespace std;

bool prime[100001];

void SieveOfEratosthenes(int d) 
{ 
    
     
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=100001; p++) 
    { 
       
        if (prime[p] == true) 
        { 
           
            for (int i=p*p; i<=100001; i += p) 
                prime[i] = false; 
        } 
    } 
  
   long long product=1;
   int p=d+1,i=1;
   while(i<3)
   {
       if(prime[p])
       {
           product *=p;
           i++;
           p=p+d;
       }
       else p=p+1;
   }
   
    cout<<product<<endl;
         
} 
  




int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int d;
	    cin>>d;
	    SieveOfEratosthenes(d);
	    
	   
	}
     
}
