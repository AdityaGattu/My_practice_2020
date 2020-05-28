/*
Concept: Let, n>=0 and j=2^n and k=(2^(n+1))-1, for i in [j,k], ans[i]=1+ans[i-(2^n)]. Base case ans[0]=0. This is the equation.
Explanation: For every number between j and k, as mentioned above, we have all the
other bits(except the most significant bit) repeated from the previous 2^n numbers in the same sequence. Suppose n=2, so j=4 and k=7. So we have, number of set bits in,
number of set bits in(4) = 1+number of set bits in(0);
number of set bits in(5) = 1+number of set bits in(1);
number of set bits in(6) = 1+number of set bits in(2);
number of set bits in(7) = 1+number of set bits in(3);
*/


class Solution {
public:
    vector<int> countBits(int num) {
        
        int x=num+1;
        
   vector<int>ans(x,0);
    ans[0]=0;
    int k = 0;
    int i = 1;
    int j;
    while(i <= num){
        j=0;
        while(i <= num && j<=k) {
            ans[i++]=ans[j++]+1;
        }
        k = i - 1;
    }
    return ans;

        
    }
};
