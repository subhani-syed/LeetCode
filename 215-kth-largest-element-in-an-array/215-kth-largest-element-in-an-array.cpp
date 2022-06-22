class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>heap(nums.begin(),nums.end());
        int res;
        while(k--){
            res = heap.top();
            heap.pop();
        }
        return res;
    }
};