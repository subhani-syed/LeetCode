class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        int n = arr.size();
        int max = arr[n-1];
        arr[n-1] = -1;
        int cur;
        for(int i = n-2;i>=0;i--){
            cur = arr[i];
            arr[i] = max;
            if(cur>max){
                max = cur;
            }
        }
        return arr;
    }
};