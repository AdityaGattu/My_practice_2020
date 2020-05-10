#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x,y;
        long long p1,p2,sum=0;
        cin>>x>>y;
        cin>>p1>>p2;
        
       long double k;
       k=p2/2.0;
      
        if(p1< k)
        {
            cout<<(x+y)*p1<<"\n";
        }
        
        
        
       else
        {
            long  long s=min(x,y);
            long long z=(s*p2)+(((x-s)+(y-s))*p1);
            cout<<z<<"\n";
        }
        
        
        
        
    }
}