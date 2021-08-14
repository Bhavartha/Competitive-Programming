class Solution {
public:
    string makeFancyString(string s) {
        string ans;
        for(auto i:s){
            int n = ans.size();
            if(n>=2 && i==ans[n-1] && i==ans[n-2]) continue;
            else ans.push_back(i);
        }
        return ans;
    }
};
