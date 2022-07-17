class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int out = 0;
        vector<int>v(heights.begin(),heights.end());
        sort(heights.begin(),heights.end());
        for(int i=0;i<v.size();i++){
            if(v[i]!=heights[i]){
                out++;
            }
        }
        return out;
    }
};