class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int>m;
        int x=-1;
        for(char c:s)
        {
            m[c]++;
        }
        
        for(int i=0;i<s.length();i++)
        {
            if(m[s[i]]==1)
            {
                x=i;break;
            }
        }
        return x;
    }
};
