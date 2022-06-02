class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> output;
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i=0;i<m;i++){
            vector<int>ele;
            for(int j=0;j<n;j++){
                ele.push_back(matrix[j][i]);
            }
            output.push_back(ele);
        }
        return output;
    }
};