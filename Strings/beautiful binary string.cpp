#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin>>n;
    char a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int fg1,fg2;
    int count=0;
    for(int i=0;i<n;i++)
    {
        fg1=0,fg2=0;
        if(a[i]=='0')
        {
            fg1=1;
          if(a[i+1]=='1'&& fg1==1)
          {
              fg2=1;
           if(a[i+2]=='0'&& fg2==1)
            {
              count++;i=i+2;
            }   
          }  
        }

    }
    cout<<count;

}