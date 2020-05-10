class Solution {
public:
    int numJewelsInStones(string J, string S) {
       
        int count=0;
        for(int j=0;j<J.length();j++)
        {
        for(int i=0;i<S.length();i++)
        {
            if(J[j]==S[i])
            {
                count++;
            }
        }
        }
        return count;
    }
};
