class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //BRUTE FORCE
        // for(int i=0;i<matrix.size();i++){
        //     for(int j=0;j<matrix[0].size();j++){
        //         if(matrix[i][j]==target){
        //             return true;
        //         }
        //     }
        // }
        // return false;
        
        //OPTIMISED METHOD
         int i = 0;
        int j = matrix[0].size() - 1;
        
        while(i >= 0 && i < matrix.size() && j >= 0 && j < matrix[0].size()){
            if(matrix[i][j] == target) return true;
            else if(matrix[i][j] > target) j--;
            else if(matrix[i][j] < target) i++;
        }
        return false;
    }
};