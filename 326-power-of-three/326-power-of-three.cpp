class Solution {
public:
    int divideByThree(int n){
        if(n%3==0){
            return n/3;
        }
        return -1;
    }
    bool isPowerOfThree(int n) {
        if(n==0)
            return false;
        else if(n==1)
            return true;
        while(divideByThree(n)!=-1){
            if(n/3==1){
                return true;
            }
            n/=3;
        }
        return false;
    }
    
    
};