class Solution {
public:
    bool divisorGame(int N) {
        int i=1,count;
        while(N>0)
        {
            if(N%i==0)
            {
                N-=i;
                count+=1;
                i=1;
            }
            else
                i+=1;
        }
        return (count%2==0)?false:true;
        
    }
};
