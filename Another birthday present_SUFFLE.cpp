#include<bits/stdc++.h>
#include <iostream>
using namespace std;

const int ma=1e5;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int a[ma],b[ma];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        b[i]=a[i];
	    }
	    
	    sort(b,b+n);
	    
	    
	    int flag=0;
	    
	    for(int i=0;i<k;i++)
	    {
	        vector<int>v;
	        vector<int>v1;
	    
	        for(int j=0;j<n;j=j+k)
	        {
	            v.push_back(a[j]);
	            v1.push_back(b[j]);
	        }
	        sort(v.begin(),v.end());
	        if(v!=v1){flag=1;break;}
	    }
	    
	    if(flag==0)
	    {
	        cout<<"yes\n";
	    }
	    
	    else{
	        cout<<"no\n";
	    }
	    
	    
	}
	return 0;
}
