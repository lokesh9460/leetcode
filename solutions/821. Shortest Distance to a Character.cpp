class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>index;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==c)
                index.push_back(i);
        }
        index.push_back(3*s.size());
        int j=0;
        vector<int> res;
        for(int i=0;i<s.size();i++)
        {
            if(i>index[j+1])
                ++j;
            res.push_back(min(abs(index[j]-i),abs(index[j+1]-i)));
        }
        return res;
            
        
        
    }
};
