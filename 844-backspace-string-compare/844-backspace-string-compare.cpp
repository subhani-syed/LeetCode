class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>stk1;
        stack<char>stk2;
        for(int i=0;i<s.length();i++){
            if(s[i]!='#'){
                stk1.push(s[i]);
            }else if(!stk1.empty()){
                stk1.pop();
            }
        }
        for(int i=0;i<t.length();i++){
            if(t[i]!='#'){
                stk2.push(t[i]);
            }else if(!stk2.empty()){
                stk2.pop();
            }
        }
        if(stk1.size()!=stk2.size())
            return false;
        while(!stk1.empty() && !stk2.empty()){
            if(stk1.top()!=stk2.top()){
                return false;
            }else{
                stk1.pop();
                stk2.pop();
            }
        }
        return true;
    }
};