class Solution {
public:
    bool hasAlternatingBits(int n) {
        int e = n&1;
        while(n){
            n = n>>1;
            if(e==(n&1))
                return false;
            e^=1;
        }
        return true;
    }
};
