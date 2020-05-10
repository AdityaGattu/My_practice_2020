class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        
        vector<int>in(N,0);
        vector<int>out(N,0);
        
        int x,y,a=-1;
        
        for(int i=0;i<trust.size();i++)
        {
           x=trust[i][0]-1;
           y=trust[i][1]-1;
           
           in[y]++;
           out[x]++;
        }
        
        for(int i=0;i<N;i++)
        {
            if(in[i]==N-1 && out[i]==0)
            {
                a=i+1;
            }
        }
        
        return a;
        
        
    }
};
