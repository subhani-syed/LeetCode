class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        unordered_set<string>s1(words.begin(),words.end());
        for(string word:s1){
            for(int i=1;i<word.size();i++){
                s1.erase(word.substr(i));
            }
        }
        int out =0;
        for(auto a:s1){
            out+= a.size()+1;
        }
        return out;
    }
};