class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> vec;
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        vec.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++){
            if(vec[vec.size()-1][1]>=intervals[i][0]){
                if(vec[vec.size()-1][1]<=intervals[i][1]){
                    vec[vec.size()-1][1]=intervals[i][1];
                } 
            }else{
                vec.push_back(intervals[i]);
            }
        }
        return vec;
    }
};