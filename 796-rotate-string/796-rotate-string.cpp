class Solution {
public:
    bool rotateString(string s, string goal) {
        int i=0;
        cout<<s.length()<<endl;
        while(i<s.length()){
            s=s.substr(1,s.length()-1)+s.at(0);
            if(s==goal){
                return true;
            }
            i++;
        }
        return false;
    }
};