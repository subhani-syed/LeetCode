class Solution {
public:
    bool isSubsequence(string s, string t) {
        int l = 0;
        int r = 0;
        for(int i=0;i<t.size();i++){
            if(s[l]==t[r]){
                l++;
                r++;
            }else{
                r++;
            }
        }
        if(l!=s.size()){
            return false;
        }else{
            return true;
        }
    }
};