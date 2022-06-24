class Solution {
public:
    int longestPalindrome(string s) {
        int out = 0;
        int odd = 0;
        unordered_map<char,int>ump;
        for(int i=0;i<s.size();i++){
            ump[s[i]]++;
        }
        if(ump.size()==1)return ump[s[0]];
        int point;
        for(auto x:ump){
            point = x.second;
            if(point%2==0){
                out += point; 
            }else{
                out +=point-1;
                odd++;
            }
        }
        if(odd>=1)return out+1;
        
        return out;
    }
};