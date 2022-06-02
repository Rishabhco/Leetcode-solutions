class Solution {
public:
    bool isPalindrome(string s) {
        string ns="",nsr="";
        for(int i=0;i<s.length();i++){
            if(iswalnum(s.at(i))){
                ns+=(char)tolower(s.at(i));
            }
        }
        for(int i=ns.length()-1;i>-1;i--){
            nsr+=ns.at(i);
        }
        if(nsr==ns){
            return true;
        }
        return false;
    }
};