class Solution {
public:
    int scoreOfParentheses(string S) {
        int c=0;
        stack<int>sum;
        for(int i=0;i<S.length();i++)
        {
            if(S[i]=='(')
            {
               sum.push(c);
                c=0;
            }
            else
            {
               int prev=sum.top();
                sum.pop();
                c+=prev+max(c,1);
            }
            
            
        }
        return c;
    }
};
