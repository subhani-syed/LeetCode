class Solution {
public:
    bool isPalindrome(string s) {
        string newstr="";
        for(int i=0;i<s.length();i++){
            if((s[i]>=48&&s[i]<=57) || (s[i]>=65 && s[i]<=90)||(s[i]>=97&&s[i]<=122)){
                if(s[i]>=65&&s[i]<=90){
                    newstr+= s[i]+32;
                }else{
                    newstr+=s[i];
                }
            }
        }
        for(int j=0;j<newstr.length()/2;j++){
            if(newstr[j]!=newstr[newstr.length()-1-j]){
                return false;
            }
        }
        return true;
    }
};