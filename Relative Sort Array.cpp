class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int> m;
        for(int i=0;i<arr2.size();i++)
            m[arr2[i]]=i;
        sort(arr1.begin(),arr1.end(),[&m](auto a,auto b){
            int i = m.find(a)!=m.end() ? m[a] : INT_MAX;
            int j = m.find(b)!=m.end() ? m[b] : INT_MAX;
            if(i==j) return a<b;
            return i<j;
        });
        return arr1;
    }
};
