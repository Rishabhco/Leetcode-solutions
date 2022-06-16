class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> vec;
        for(int i=0;i<rowIndex+1;i++){
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
            if(i==rowIndex){
              return vect;   
            }
            vec.push_back(vect);
        }
        return vec[rowIndex];
    }
    
};