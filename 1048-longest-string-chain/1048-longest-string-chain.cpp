class Solution {
public:
    int longestStrChain(vector<string>& words) {
        int k = 0;
        sort(words.begin(),words.end(),sortByLength);
        unordered_map<string,int>dp;
        for(auto word:words){
            for(int i=0;i<word.size();i++){
                string pred = word.substr(0,i)+word.substr(i+1);
                dp[word] = max(dp[word],dp[pred]+1);
            }
            k = max(k,dp[word]);
        }
        return k;
    }
    static bool sortByLength(string& s1,string& s2){
        return s1.length()<s2.length();
    }
};