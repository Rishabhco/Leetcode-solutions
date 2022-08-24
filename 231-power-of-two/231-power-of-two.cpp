class Solution {
public:
      int divideByTwo(int n){
        if(n%2==0){
            return n/2;
        }
        return -1;
    }
    bool isPowerOfTwo(int n) {
        if(n==0)
            return false;
        else if(n==1)
            return true;
        while(divideByTwo(n)!=-1){
            if(n/2==1){
                return true;
            }
            n/=2;
        }
        return false;
    }
};