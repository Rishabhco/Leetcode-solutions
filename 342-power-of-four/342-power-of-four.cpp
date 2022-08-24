class Solution {
public:
     int divideByFour(int n){
        if(n%4==0){
            return n/4;
        }
        return -1;
    }
    bool isPowerOfFour(int n) {
        if(n==0)
            return false;
        else if(n==1)
            return true;
        while(divideByFour(n)!=-1){
            if(n/4==1){
                return true;
            }
            n/=4;
        }
        return false;
    }
};