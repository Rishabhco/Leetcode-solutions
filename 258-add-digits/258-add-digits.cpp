class Solution {
public:
    int findSum(int n){
        int rem=0;
        while(n>=10){
            rem+=n%10;
            n/=10;
        }
        return rem+n;
    }
    int addDigits(int num) {
        while(num>=10){
            num=findSum(num);
        }
        return num;
    }
};