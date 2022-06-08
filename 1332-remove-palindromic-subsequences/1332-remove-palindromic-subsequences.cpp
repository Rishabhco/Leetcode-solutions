class Solution {
public:
    int removePalindromeSub(string s) {
        string P = s;
        reverse(P.begin(), P.end());
        if (s == P) {
            return 1;
        }
        else{
            return 2;
        }
    }
};