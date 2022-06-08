class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>ump;
        for(int i=0;i<s.length();i++){
            ump[s[i]]++;
        }
        int val = ump[s[0]];
        for(auto i = ump.begin();i!=ump.end();i++){
            if(i->second!=val){
                return false;
            }
        }
        return true;
    }
};