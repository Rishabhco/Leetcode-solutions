class Solution {
public:
    string reverseVowels(string s) {
        vector<int> vecInd;
        vector<char> vecChar;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u'|| s[i]=='A' || s[i]=='E' || s[i]=='O' || s[i]=='I' || s[i]=='U'){
                vecInd.push_back(i);
                vecChar.push_back(s[i]);
            }
        }
        for(int i=0;i<vecInd.size();i++){
            s[vecInd[i]]=vecChar[vecChar.size()-i-1];
        }
        return s;
    }
};