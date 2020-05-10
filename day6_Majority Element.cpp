class Solution {
public:
    int majorityElement(vector<int>& v) {
        map<int,int>m;
        for(int i=0;i<v.size();i++)
        {
            m[v[i]]++;
        }
        int max=-1,ele;
        for(int i=0;i<v.size();i++)
        {
            if(max<m[v[i]])
            {
                max=m[v[i]];
                ele=v[i];
            }
        }
        return ele;
        
    }
};
