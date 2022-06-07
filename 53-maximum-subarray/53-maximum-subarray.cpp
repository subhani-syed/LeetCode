class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cursum = nums[0];
        int maxsum = nums[0];
        for(int i=1;i<nums.size();i++){
            if(cursum<0){
                cursum = 0;
            }
            cursum += nums[i];
            maxsum = max(maxsum,cursum);
        }
        return maxsum;
    }
};