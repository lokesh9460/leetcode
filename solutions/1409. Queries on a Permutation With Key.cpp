class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int> v;
        int j;
        for(int i=0;i<m;i++)
            v.push_back(i+1);
        for(int i=0;i<queries.size();i++)
        {
            j=find(v.begin(),v.end(),queries[i])-v.begin();
            v.erase(v.begin()+j);
            v.insert(v.begin(),queries[i]);
            queries[i]=j;
        }
        return queries;
        
    }
};
