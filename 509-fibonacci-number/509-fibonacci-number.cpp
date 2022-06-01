class Solution {
public:
    int fib(int n) {
        int m=n, a=0, b=0;
        if(m>1) {
            a= fib(m-1) ;
            b=fib(m-2) ;
        }else if(m==1) {
            a=1;
        }
        return a+b;
    }
};