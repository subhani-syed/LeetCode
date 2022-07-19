class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int>ump;
        for(int i=0;i<nums.size();i++){
            ump[nums[i]]++;
        }
        vector<int>out;
        for(int i=1;i<=nums.size();i++)
        {
            if(ump.find(i)==ump.end()){
                out.push_back(i);
            }
        }
        return out;
    }
};