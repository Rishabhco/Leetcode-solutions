class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string x="",word;
        stringstream ss(s);
        while(ss>>word){
            st.push(word);
        }
        while(!st.empty()){
            x+=st.top();
            st.pop();
            if(!st.empty()){
                x+=" ";
            }
        }
        return x;
    }
};