class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int mid = nums[n/2];
        int out = 0;
        for(int i=0;i<nums.size();i++){
            out += abs(nums[i]-mid);
        }
        return out;
    }
};