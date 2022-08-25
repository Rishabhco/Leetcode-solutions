class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> mpp1;
        map<char,int> mpp2;
        for(int i=0;i<ransomNote.size();i++){
            mpp1[ransomNote[i]]++;
        }
        for(int i=0;i<magazine.size();i++){
            mpp2[magazine[i]]++;
        }
        for(auto it:mpp1){
            if(it.second>mpp2[it.first]){
                return false;
            }
        }
        return true;
    }
};