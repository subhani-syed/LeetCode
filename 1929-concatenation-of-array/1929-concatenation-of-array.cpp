class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int>out(n*2,0);
        for(int i=0;i<n;i++){
            out[i] = nums[i];
            out[i+n]=nums[i];
        }
        return out;
    }
};