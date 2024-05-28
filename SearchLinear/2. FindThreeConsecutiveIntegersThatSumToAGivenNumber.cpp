//Find Three Consecutive Integers That Sum to a Given Number

class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        if(num % 3 != 0) return {};
        long long y = num / 3;
        
        return {y-1, y, y+1};
    }
};
