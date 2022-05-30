class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> vec;
        for(int c=s.size()-1;c>-1;c--){
            vec.push_back(s.at(c));
        }
        swap(s,vec);
    }
};