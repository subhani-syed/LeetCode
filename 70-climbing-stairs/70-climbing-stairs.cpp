class Solution {
public:
    int climbStairs(int n) {
     return fib(n+1);    
    }
    
    int fib(int n) {
        if(n<2)
            return n;
        int a = 0,b=1,c;
        for(int i=1;i<n;i++){
            c = a+b;
            a = b;
            b = c;
        }
        return c;
    }
};