class Solution {
public:
    int reverse(int x) {
        long sign=1,rev=0,r;
        if(x<0){
            sign=-1;
        }
        long xL=abs(x);
        while(xL>=10){
            r=xL%10;
            rev=rev*10+r;
            xL=xL/10;
        }
        if(pow(-2,31)<((rev*10)+xL)*sign && ((rev*10)+xL)*sign<(pow(2,31)-1)){
            return (int)(((rev*10)+xL)*sign);
        }else{
            return 0;
        }
    }
};