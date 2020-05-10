class Solution {
public:
    
    int findComplement(int num) {
        int a[1234];
        int i=0,y,h;
        while(num>0)
        {
            y=num%2;
            if(y==1)
            {h=0;}
            else if(y==0)
            {
                h=1;
            }
            a[i]=h;
            
            num=num/2;i++;
        }
        int k=0,decimalNumber=0;
        for(int j=i-1;j>=0;j--)
    {
        int remainder = a[j];
            cout<<remainder<<" ";
         decimalNumber += remainder*pow(2,j);
        
    }
        
       return decimalNumber;
    }
};
