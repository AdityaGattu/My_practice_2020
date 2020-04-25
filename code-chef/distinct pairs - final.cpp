


#include<bits/stdc++.h>
#include <iostream>
using namespace std;

//const long long ma = 1e9+9;
int main() {
	// your code goes here

	    int n,m,i,j;
	    cin>>n>>m;
	    vector< pair<long long,int> >v1;
	    vector< pair<long long,int> >v2;
	    long long  a,b;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a;
	        v1.push_back(make_pair(a,i));
	    }
	    
	    for(int j=0;j<m;j++)
	    {
	        cin>>b;
	        v2.push_back(make_pair(b,j));
	    }
	    
	    
	  
	    sort(v1.begin(),v1.end());
	    sort(v2.begin(),v2.end());
	    
	  
	    long count=0;
	  
	    for(int i=0;i<m;i++)
	    {
		   cout<<v1[0].second<<" "<<v2[i].second<<"\n";
	    } 
	    
	    for(int j=1;j<n;j++)
	    {
	        cout<<v1[j].second<<" "<<v2[m-1].second<<"\n";
	    }
	   

	return 0;
}
