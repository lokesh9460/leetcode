class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size(),len=0;
        vector<int> prev(128,-1);
        int l=0,r=0;
        while(r<n)
        {
            if(prev[s[r]]!=-1)
                l=max(prev[s[r]]+1,l);
            prev[s[r]]=r;
            int cl=r-l+1;
            len=max(len,cl);
            r++;
        }
        return len;
            
        
    }
};
