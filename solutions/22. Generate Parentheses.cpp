class Solution {
    vector<string> res;
public:
    void solve(int open,int close,string s)
    {
        if(open==0 and close==0)
        {
            res.push_back(s);
            return;
        }
        if(open>0)
            solve(open-1,close,s+'(');
        if(close>open)
            solve(open,close-1,s+')');
    }
    vector<string> generateParenthesis(int n) {
        solve(n,n,"");
        return res;
        
    }
};
