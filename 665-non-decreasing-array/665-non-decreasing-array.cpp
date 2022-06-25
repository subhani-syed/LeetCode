class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int change = 0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<=nums[i+1])
                continue;
            if(change)
                return false;
            if(i==0||nums[i+1]>=nums[i-1])
                nums[i] = nums[i+1];
            else
                nums[i+1] = nums[i];
            change = 1;
        }
        return true;
    }
};