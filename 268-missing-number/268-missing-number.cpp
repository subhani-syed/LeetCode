class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int s1 = (n*(n+1))/2;
        int sum = 0;
        for(auto x:nums){
            sum += x;
        }
        return s1-sum;
    }
};