class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
            vector<int> arr;
            arr.push_back(first);
        for(int i=0;i<encoded.size();i++)
        {
            int w=encoded[i]^first;   
            arr.push_back(w);
            first=w;
            
        }
        return arr;
        
    }
};
