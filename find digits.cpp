#include <bits/stdc++.h>

using namespace std;


int main()
{
    int t,n,curr_dig;
    cin>>t;
    while(t--)
    {  
        int count=0;
        cin>>n;
        int s=n;

        while(n>0)
        {
            curr_dig=n%10;
            n=n/10;
            if(curr_dig!=0){
            if(s%curr_dig==0)
            {
                count++;
            }}
            else{}
        }
        cout<<count<<"\n";

    }
}