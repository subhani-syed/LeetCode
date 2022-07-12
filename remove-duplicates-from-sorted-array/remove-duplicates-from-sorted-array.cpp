class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left = 0;
        int k = 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[left]){
                left++;
                nums[left] = nums[i];
                k++;
            }
        }
        return k;
    }
};