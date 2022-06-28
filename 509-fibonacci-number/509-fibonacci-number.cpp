class Solution {
public:
    int fib(int n) {
        if(n==0)return 0;
        
        int fib1 = 0;
        int fib2 = 1;
        int fib = fib1+fib2;
        while(n--){
            fib1 = fib2;
            fib2 = fib;
            fib = fib1+fib2;
        }
        return fib1;
    }
};