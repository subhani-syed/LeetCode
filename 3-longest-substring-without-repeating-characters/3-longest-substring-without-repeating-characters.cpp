class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()<2){
            return s.length();
        }else{
            int left = 0;
            int right = 0;
            int maxv = 0;
            int k = 0;
            unordered_map<char,int>ump;
            while(right<s.length()){
                ump[s[right]]++;
                if(ump[s[right]]==1){
                    right++;
                    k++;
                }else{
                    left++;
                    right = left;
                    k = 0;
                    ump.clear();
                }
                maxv = max(maxv,k);
            }
            return maxv;
        }   
    }
};