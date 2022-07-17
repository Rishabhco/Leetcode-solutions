class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> vec(n,vector<int> (n,0));
        int i=1,left=0,top=0,right=n-1,bottom=n-1;
        while(i<=n*n && left<=right && top<=bottom){
            for(int j=left;j<=right;j++){
                vec[top][j]=i;
                i++;
            }
            top++;
            for(int j=top;j<=bottom;j++){
                vec[j][right]=i;
                i++;
            }
            right--;
            if(top<=bottom){
                for(int j=right;j>=left;j--){
                    vec[bottom][j]=i;
                    i++;
                }
                bottom--;
            }
            if(left<=right){
                for(int j=bottom;j>=top;j--){
                    vec[j][left]=i;
                    i++;
                }
                left++;
            }
        }
        return vec;
    }
};