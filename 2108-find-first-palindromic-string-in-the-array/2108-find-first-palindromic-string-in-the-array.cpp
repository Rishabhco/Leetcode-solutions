class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            string a=words[i];
            reverse(words[i].begin(),words[i].end());
            if(a==words[i]){
                return a;
            }
        }
        return "";
    }
};