class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        map<char,int>m;
        map<char,int>m2;
        
        for(int i=0;i<s1.size();i++)
        {
            m[s1[i]]++;
        }
        
        
        for(int i=0;i<s2.size();i++)
        {
            m2[s2[i]]++;
        }
        bool flag=true;
         for(int i=0;i<s1.size();i++)
        {
            if(m[s1[i]]==m2[s1[i]])
            {
                continue;
            }
             
             else{flag=false; break;}
        }
        return flag;
    }
};
