class Solution {
public:
    string capitalizeTitle(string title) {
        stringstream str(title);
        string word,ans,fin="",res="";
        while(str>> word){
            if(word.length()==1 || word.length()==2){
                for(int i=0;i<word.length();i++)
                    ans+=tolower(word[i]);
            }else{
                ans=toupper(word[0]);
                for(int i=1;i<word.length();i++)
                    ans+=tolower(word[i]);
            }
            res=res+ans+" ";
            ans=""; 
        }
        for(int i=0;i<res.length()-1;i++)
            fin+=res[i];
        return fin;
    }
};