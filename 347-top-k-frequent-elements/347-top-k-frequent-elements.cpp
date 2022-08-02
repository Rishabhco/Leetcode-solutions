class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> pq;
        vector<int> vec;
        map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto it:mpp){
            pq.push(make_pair(it.second,it.first));
        }
        for(int i=0;i<k;i++){
            vec.push_back(pq.top().second);
            pq.pop();
        }
        return vec;
    }
};