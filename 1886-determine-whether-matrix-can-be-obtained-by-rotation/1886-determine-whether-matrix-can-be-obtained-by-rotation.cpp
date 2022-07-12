class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        bool flag;
        int n=mat.size();
        int r=4;
        while(r--){
            flag=true;
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(mat[i][j]!=target[i][j]){
                        flag=false;
                        break;
                    }
                }
                if(!flag) break;
            }
            if(flag) break;
            for(int i=0;i<n;i++){
                for(int j=0;j<=i;j++)
                    {if(i!=j)
                    swap(mat[i][j],mat[j][i]);}
            }
            for(int i=0;i<n;i++)
                reverse(mat[i].begin(),mat[i].end());
        }
        return flag;
    }
};