number of tokens inside it mustn’t ever exceed the capacity of any box behind it.

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long t;
	const int ma = 1e5+5;
	cin>>t;
	while(t--)
	{
	    long long n;
	    cin>>n;
	    long long m1;long long sum=0;
	    long long a[ma];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    m1=a[0];
	     for(int i=0;i<n;i++)
	    {
	    m1=min(m1,a[i]);
	       sum+=m1;
	    }
	 cout<<sum<<"\n";
	}
	  
	    
	  
	
	return 0;
}
