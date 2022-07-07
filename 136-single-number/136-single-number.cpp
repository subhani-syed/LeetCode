class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int out = 0,n=nums.size();
        for(int i=0;i<n;i++){
            out = out ^ nums[i];
        }
        return out;
    }
};