class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int out = 0,mid;
        for(int i=0;i<accounts.size();i++){
            mid =0;
            for(int j = 0;j<accounts[0].size();j++){
                mid += accounts[i][j];    
            }
            if(mid>out){
                out = mid;
            }
        }
        return out;
    }
};