class Solution {
public:
    char repeatedCharacter(string s) {
        map<char,int> mpp;
        for(int i=0;i<s.length();i++){
            mpp[s.at(i)]++;
            if(mpp[s.at(i)]==2){
                return s.at(i);
            }
        }
        return s.at(0);
    }
};