class Solution {
public:
    int minPartitions(string n) {
        int res = 0;
        for(char x:n){
            res = max(res,x-48);
        }
        return res;
    }
};