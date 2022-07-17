class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> out;
        for(auto x:nums){
            if(x%2==0){
                out.insert(out.begin(),x);
            }else{
                out.push_back(x);
            }
        }
        return out;
    }
};