class Solution {
public:
    string minWindow(string s, string t) {
        int res=INT_MAX,k=0,start=0;
        vector<int> count(128);
        for(auto c:t)
            if(!count[c]++)
                k++;
        for(int i=0,j=0;j<s.size();j++)
        {
            if(!--count[s[j]])
                k--;
            while(!k)
            {
                if(res>j-i+1)
                  start=i,res=j-i+1;
                if(++count[s[i++]]>0)
                    k++;
            }
        }
        return res==INT_MAX?"":s.substr(start,res);
    }
};
