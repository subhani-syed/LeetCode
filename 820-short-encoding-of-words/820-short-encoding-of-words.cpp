class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        unordered_set<string>s1(words.begin(),words.end());
        for(string &word:words){
                for(int i=1;i<word.size();i++){
                    s1.erase(word.substr(i));
                }
        }
        int out = s1.size();
        for(string a:s1){
            out+= a.size();
        }
        return out;
    }
};