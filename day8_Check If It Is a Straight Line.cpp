class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
        bool k;
        int x=c[0][0];
        int y=c[0][1];
        int x1=c[1][0];
        int y1=c[1][1];
        float s,l;
           if(x1!=x){ s=(y1-y)/(float(x1)-float(x));}
        else{s=9999;}
        cout<<s<<" "<<"\n";
        int y2,x2;
         int flag=0;
        for(int i=1;i<c.size();i++)
        {
            y2=c[i][1];
            x2=c[i][0];
            
            if(x2!=x){
             l=(y2-y)/(float(x2)-float(x));}
            
            else{l=9999;}
            
            cout<<l<<" ";
            if((l-s)!=0){
                flag=1;break;
            }
        }
        if(flag==1)
        {
          k=false;
        }
          else{
              k=true;
          }     
        return k;
    }
};
