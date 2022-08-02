class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<mat.size();i++){
            int count=0;
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==1)
                    count++;
            }
            pq.push(make_pair(0-count,0-(i+1)));
        }
        vector<int> vec;
        for(int i=0;i<k;i++){
            vec.push_back(0-(pq.top().second+1));
            pq.pop();
        }
        return vec;
    }
};