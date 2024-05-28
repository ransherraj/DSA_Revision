class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int best = 0;
        unordered_set<int> st(nums.begin(), nums.end());
        for(auto x : nums){
            if(st.find(x-1)==st.end()){
                int y = x+1;
                while(st.find(y)!=st.end()){
                    y += 1;
                }
                best = max(best, y - x);
            }
        }
        return best;
    } 
};
