class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        vector<int> vec;
        for(int i=0;i<arr.size();i++){
            pq.push(make_pair(abs(arr[i]-x),arr[i]));
        }
        for(int i=0;i<k;i++){
            vec.push_back(pq.top().second);
            pq.pop();
        }
        sort(vec.begin(),vec.end());
        return vec;
    }
};