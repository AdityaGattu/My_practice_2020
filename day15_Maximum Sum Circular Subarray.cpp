#include<bits/stdc++.h>
class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) {
        
        vector<int>v;
        vector<int>v1;
        int n=A.size();
      
        int u=n;
  
        for(int i=0;i<n;i++)
        {
            v.push_back(A[i]);
        }
        v.push_back(A[0]);
        
           while(u>0){
               
        for(int i=0;i<n;i++)
        {
        int sum=0;
         for(int j=i;j<n;j++)
        {
             sum+=v[j];
            
            v1.push_back(sum);
        }
        }
        int temp=v[0];
        for(int i=0;i<n-1;i++)
        {
            
            v[i]=v[i+1];
        }
        v[n-1]=temp;
         
       
               u--;
        
       }
        sort(v1.begin(),v1.end());
        
        return v1[v1.size()-1];
    }
};
