#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int sum=0;
        int l=s.length();
        for(int i=0;i<l/2;i++)
        {
            if(s[i]==s[l-i-1])
            {continue;}
            else{
                sum+=abs((int)s[i]-(int)s[l-i-1]);
            }
        }
        cout<<sum<<"\n";
    }
}