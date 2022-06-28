class Solution {
public:
    int fib(int n) {
        if(n<2)return n;
        int a = 0,b=1,c=0;
        for(int i=0;i<n-1;i++){
            c = a+b;
            a = b;
            b = c;
        }
        return c;
    }
};