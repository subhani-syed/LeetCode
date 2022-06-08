class Solution {
public:
    int removePalindromeSub(string s) {
        int out;
        if (s==""){
            out = 0;
        }else{
            int pl = 1;
            for(int i=0,j=s.length()-1;i<j;i++,j--){
                if(s[i]!=s[j]){
                    pl = 0;
                    break;
                }
            }
            if(pl==1){
                return 1;
            }else{
                return 2;
            }
        }
        return out;
    }
};