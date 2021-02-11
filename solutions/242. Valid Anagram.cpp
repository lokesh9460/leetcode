class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>h1,h2;
        for_each(s.begin(),s.end(),[&h1](const char &c1){h1[c1]++;});
        for_each(t.begin(),t.end(),[&h2](const char &c1){h2[c1]++;});
        return h1==h2;
        
    }
};
