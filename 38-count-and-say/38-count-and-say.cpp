class Solution {
public:
    string countAndSay(int n) {
        if(n==1){
            cout<<n<<"1"<<endl;
            return "1";
        }else{
            string s=countAndSay(n-1);
            string ns="";
            int i,j;
            for( i=0;i<s.length();i++){
                char v=s.at(i);
                int count=1;
                for(j=i+1;j<s.length();j++){
                    if(v!=s.at(j)){
                        break;
                    }else{
                        count++;
                        i++;
                    }
                };
                ns+=to_string(count)+v;
            }
            return ns;
        }
    }
};