class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>queue(nums.begin(),nums.end());
        for(int i=1;i<k;i++){
            queue.pop();
        }
        return queue.top();
    }
};