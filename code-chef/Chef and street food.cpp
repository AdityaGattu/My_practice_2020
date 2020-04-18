#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	const int ma = 1e5+5;
   long long t;
   cin>>t;
   while(t--)
   {
       long long n,i;
       long long m,y=-1;
       cin>>n;
       int s[ma],p[ma],v[ma];
       for(i=0;i<n;i++)
       {
           cin>>s[i]>>p[i]>>v[i];
           m=p[i]/(s[i]+1)*v[i];
           y=max(m,y);
       }
       cout<<y<<"\n";
   }
}
