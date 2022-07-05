class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int res = 1;
        int out = 1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]==nums[i]+1){
                out++;
                res = max(res,out);
            }else if(nums[i+1]==nums[i]){
                continue;
            }
            else{
                out = 1;
            }
        }
        return res;
    }
};