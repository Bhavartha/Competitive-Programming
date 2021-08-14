class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int e) {
        int mx = *max_element(c.begin(),c.end());
        vector<bool> v;
        for(auto i:c){
            if(i+e >= mx) v.push_back(true);
            else v.push_back(false);
        }
        return v;
    }
};
