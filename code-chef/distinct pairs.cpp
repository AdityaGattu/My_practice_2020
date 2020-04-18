#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here

	    int n,m;
	    cin>>n>>m;
	    int s[n],s1[m];
	    for(int i=0;i<n;i++)
	    {
	        cin>>s[i];
	    }
	    
	    for(int i=0;i<m;i++)
	    {
	        cin>>s1[i];
	    }
	    
	    set< int >s2;
	    int l;int count=0;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            l=s[i]+s1[j];
	            auto pos=s2.find(l);
	            if(pos==s2.end() && count<n+m-1)
	            {
	                s2.insert(l);
	                cout<<i<<" "<<j<<"\n";
	                count++;
	            }
	        }
	    }
	    
	   

	return 0;
}
