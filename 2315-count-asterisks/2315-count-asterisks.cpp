class Solution {
public:
    int countAsterisks(string s) {
        int countBar,countAsterik=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='|'){
                countBar++;
            }
            if(countBar%2==0 && s[i]=='*'){
                countAsterik++;
            }
        }
        return countAsterik;
    }
};