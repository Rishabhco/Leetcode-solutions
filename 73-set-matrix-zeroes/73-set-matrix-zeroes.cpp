class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> vec;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    vec.push_back(make_pair(i,j));
                }
            }
        }
        for(int i=0;i<vec.size();i++){
            int k=vec.at(i).first,l=vec.at(i).second;
            for(int z=0;z<matrix[0].size();z++){
                matrix[k][z]=0;
            }
            for(int z=0;z<matrix.size();z++){
                matrix[z][l]=0;
            }
        }
    }
};