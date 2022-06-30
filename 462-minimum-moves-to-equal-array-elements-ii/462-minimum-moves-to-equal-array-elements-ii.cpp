class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int left = 0, right = n- 1, moves = 0;
        while (left < right)
            moves += nums [right--] - nums [left++];
        return moves;
    }
};