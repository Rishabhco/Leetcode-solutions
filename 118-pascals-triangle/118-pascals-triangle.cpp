class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> vec;
        for(int i=0;i<numRows;i++){
            vector<int> vect;
            int j=0;
            while(j<=i){
                if(j==i || j==0){
                    vect.push_back(1);
                }else{
                    vect.push_back(vec[i-1][j-1]+vec[i-1][j]);
                }
                j++;
            }
            vec.push_back(vect);
        }
        return vec;
    }
};