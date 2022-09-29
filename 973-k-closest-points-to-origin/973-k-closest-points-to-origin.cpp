class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<double,vector<int>>,vector<pair<double,vector<int>>>,greater<pair<double,vector<int>>>> pq;
        vector<vector<int>> vec;
        for(int i=0;i<points.size();i++){
            pq.push(make_pair(sqrt((points[i][0]*points[i][0])+(points[i][1]*points[i][1])),points[i]));
            cout<<sqrt((points[i][0]*points[i][0])+(points[i][1]*points[i][1]))<<endl;
        }
        for(int i=0;i<k;i++){
            vec.push_back(pq.top().second);
            cout<<vec[i][0]<<vec[i][1]<<endl;
            pq.pop();
        }
        return vec;
    }
};