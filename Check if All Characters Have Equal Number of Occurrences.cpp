class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int> v(26,0);
        for(auto i:s)
            v[i-'a']++;
        int mn=INT_MAX,mx=INT_MIN;
        for(auto i:v){
            if(i!=0){
                mn = min(mn,i);
                mx = max(mx,i);
            }
        }
        return mx==mn;
    }
};
