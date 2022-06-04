class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int j=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[' || st.empty()){
                st.push(s.at(i));
                j++;
            }else{
                if((s[i]==')' && st.top()=='(')||(s[i]=='}' && st.top()=='{')||(s[i]==']' && st.top()=='[') && !st.empty()){
                    st.pop();
                    j--;
                }else{
                    return false;
                }
            }
        }
        if(j==0){
            return true;
        }
        return false;
    }
};