class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> fM;
        string result="";
        for(int i=0; i<s.length(); i++)
            fM[s[i]]++;

        sort(s.begin(), s.end(), [&fM](char a, char b){
            return ((fM[a] > fM[b]) || (fM[a] == fM[b] && a<b));
        });

        return s;
    }
};
