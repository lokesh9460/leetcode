class Solution {
public:
    int balancedStringSplit(string s) {
        int a=0;
        int c=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='R')
                a++;
            else
                a--;
            if(a==0)
                c++;
        }
        return c;
        
    }
};
