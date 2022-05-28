class Solution {
public:
    int missingNumber(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<=nums.size();i++){
            mp[i]=-1;
        }
        for(auto x:nums){
            mp[x]++;
        }
        for(auto x:mp){
            if(x.second==-1){
                return x.first;
            }
        }
        return -1;
    }
};