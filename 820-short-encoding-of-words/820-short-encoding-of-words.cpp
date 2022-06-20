class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        unordered_set<string>s1(words.begin(),words.end());
        for(string word:s1){
            if (s1.find(word) != s1.end())
                for(int i=1;i<word.size();i++){
                    s1.erase(word.substr(i));
                }
        }
        int out = s1.size();
        for(auto a:s1){
            out+= a.size();
        }
        return out;
    }
};