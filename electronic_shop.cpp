#include<iostream>
using namespace std;

int main()
{
    int b,n,m;
    cin>>b>>m>>n;
   int a[m],b1[n];
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }

    
    for(int i=0;i<n;i++)
    {
        cin>>b1[i];
    }
    int sum=0;int max=-99999999;
    for(int i=0;i<m;i++)
    {
    for(int j=0;j<n;j++)
     { 
         sum=a[i]+b1[j];
         if(sum<=b){
             if(max<sum){
                 max=sum;
             }
         }
         sum=0;
      }
    }
    if(max<0){cout<<"-1";}
    else{cout<<max;}

}
