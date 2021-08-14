class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        auto f = edges[0];
        auto s = edges[1];
        if(f[0]==s[0] || f[0]==s[1]) return f[0];
        else return f[1];
    }
};
