class Solution {
public:
    int lengthOfLastWord(string s) {
       stack<string> st;
       string word;
       stringstream ss(s);
       while(ss>>word){
           st.push(word); 
       }
       string lw=st.top();
       return lw.length();
    }
};