class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int> mpp;
        int temp,count=0;
        for(int i=0;i<s.length();i++){
            mpp[s[i]]++;
        }
        for(auto it:mpp){
            if(it.second!=temp && count!=0){
                return false;
            }
            temp=it.second;
            count++;
        }
        return true;
    }
};