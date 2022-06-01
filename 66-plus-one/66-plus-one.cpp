class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool extra=false;
        for(int i=digits.size()-1;i>-1;i--){
            if(digits.at(i)!=9){
                digits.at(i)=digits.at(i)+1;
                extra=false;
                break;
            }else{
                digits.at(i)=0;
                extra=true;
            }
        }
        if(extra){
            for(int i=0;i<digits.size();i++){
                if(i==0){
                    digits.at(0)=1;
                }else{
                    digits.at(i)=0;
                }
            }
            digits.push_back(0);
        }
        return digits;
    }
};