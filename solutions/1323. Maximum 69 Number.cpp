class Solution {
public:
    int maximum69Number (int num) {
        int max=num;
        string s=to_string(num);
        for(int i=0;i<s.size();i++)
        {
            s[i]=s[i]=='9'?'6':'9';
            int n=stoi(s);
            if(n>max)
                max=n;
            s[i]=s[i]=='9'?'6':'9';
        }
        return max;
    }
};
