class Solution {
public:
    int minDeletions(string s) {
        int out = 0;
        unordered_map<char,int>ump;
        for(char x:s){
            ump[x]++;
        }
        set<int>s1;
        int num;
        for(auto x:ump)
        {
            num = x.second;
            if(s1.find(num)==s1.end()){
                s1.insert(num);
            }
            else{
                while(s1.find(num)!=s1.end() && num>0){
                    num = num-1;
                    out = out+1;
                }
                s1.insert(num);
            }
        }
        return out;
    }
};