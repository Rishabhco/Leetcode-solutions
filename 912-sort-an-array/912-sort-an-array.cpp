class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        priority_queue<int, vector<int>,greater<int>> pq(nums.begin(),nums.end());
        vector<int> vec;
        for(int i=0;i<nums.size();i++){
            vec.push_back(pq.top());
            pq.pop();
        }
        return vec;
    }
};