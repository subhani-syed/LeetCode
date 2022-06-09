class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int left = 0;
        // int k = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                nums[left] = nums[i];
                // k++;
                left++;
            }
        }
        return left;
    }
};