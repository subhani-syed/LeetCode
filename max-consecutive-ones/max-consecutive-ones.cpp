class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
     int result = 0;
    int curr = 0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==1){
            curr++;
        }else{
            curr = 0;
        }
        if(curr>result){
            result = curr;
        }
    }
        return result;
    }
};