class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        
        int pre = 0;
        for(int i=0;i<nums.size();i++){
            pre+=nums[i];
            if(2*pre == sum+nums[i]){
                return i;
            }
        }
        return -1;   
    }
};