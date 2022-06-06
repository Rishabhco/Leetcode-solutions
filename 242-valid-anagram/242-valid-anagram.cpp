class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;                      
        }                                       
        map<char,int> mps,mpt;
        for(int i=0;i<s.length();i++){
            mps[s.at(i)]++;
            mpt[t.at(i)]++;
        }
        return mps==mpt;
    }
};