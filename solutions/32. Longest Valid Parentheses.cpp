class Solution {
public:
    int longestValidParentheses(string s) {
        int mx=0;
        vector<int> st={-1};
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
                st.push_back(i);
            else if(st.size()==1)
                st[0]=i;
            else{
                st.pop_back();
                mx=max(mx,i-st.back());
            }
        }
        return mx;
        
        
    }
};
