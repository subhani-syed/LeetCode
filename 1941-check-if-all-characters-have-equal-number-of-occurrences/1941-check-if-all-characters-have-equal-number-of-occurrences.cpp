class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>ump;
        for(int i=0;i<s.length();i++){
            ump[s[i]]++;
        }
        set<int> st;
        for(auto i = ump.begin();i!=ump.end();i++){
            st.insert(i->second);
        }
        if(st.size()>1){
            return false;
        }else{
            return true;            
        }
    }
};