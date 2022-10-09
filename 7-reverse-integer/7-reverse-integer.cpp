class Solution {
public:
    int reverse(int x) {
        long out = 0;
        while(x!=0){
            out = out*10 + (x%10);
            x = x/10;
        }
        if(out < INT_MIN || out > INT_MAX){
            return 0;
        }else{
            return out;            
        }
    }
};