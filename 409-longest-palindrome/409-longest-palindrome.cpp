class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>ump;
        for(int i=0;i<s.size();i++){
            ump[s[i]]++;
        }
        int odd = 0;
        for(auto x:ump){
            if(x.second%2!=0) odd++;
        }
        int val = 0;
        if(odd>=1)val =1;
        return s.size() - odd +val; 
    }
};