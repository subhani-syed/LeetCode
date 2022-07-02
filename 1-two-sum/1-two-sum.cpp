class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // vector<int>result;
        // unordered_map<int,int>umap;
        // for(int i=0;i<nums.size();i++){
        //     umap[nums[i]]++;
        // }
        // for(int i=0;i<nums.size();i++){
        //     if(umap.find(target-nums[i])!=umap.end()){
        //         int complement = target-nums[i];
        //         auto j = find(nums.begin(),nums.end(),complement);
        //         if(j-nums.begin()!=i){
        //             result.push_back(i);
        //             result.push_back(j-nums.begin());
        //             return result;
        //         }
        //     }
        // }
        // return result;
        unordered_map<int,int>ump;
        for(int i=0;i<nums.size();i++){
            if(ump.find(target-nums[i])==ump.end()){
                ump[nums[i]] = i;
            }else{
                return {i,ump[target-nums[i]]};
            }
        }
        return {0,0};
    }
};