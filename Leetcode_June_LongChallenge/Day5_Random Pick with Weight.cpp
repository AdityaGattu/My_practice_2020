class Solution {
public:
    vector<int> sum;
    Solution(vector<int>& w) {
        sum=w;
        for ( int i=1;i<w.size();i++) {
            sum[i] = sum[i-1] + w[i];
        }
    }

    int pickIndex() {
        int x=rand()%sum.back();
        int l=0;
        int r=sum.size()-1;
        while (l<r) 
        {
             int mid=l+(r-l)/2 ;
             if (sum[mid]<=x) 
                 l=mid + 1 ;
             else 
                 r=mid;
        }
        return r;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */
