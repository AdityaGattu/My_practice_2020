
class Solution {
public:
   vector<int> findAnagrams(string s, string p) {

        vector<int>count1(26);
        vector<int>count2(26);
        vector<int>res;

        for(int i=0; i<p.size(); i++) count2[p[i]-'a']++;
        for(int i=0; i<s.size(); i++){ 
            count1[s[i]-'a']++;

        if(i >= p.size()) count1[s[i - p.size()]-'a']--;
        if(count1 == count2) res.push_back(i-p.size()+1);

        }
        return res;
    }
};
