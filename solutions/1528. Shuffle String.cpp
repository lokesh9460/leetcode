class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string n=s;
        for(int i=0;i<s.size();i++)
        {
            n[indices[i]]=s[i];
        }
        return n;
        
        
    }
};
