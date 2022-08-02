class Solution {
public:
    int maxProduct(vector<int>& nums) {
        //brute force
        // priority_queue<int> pq;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         pq.push((nums[i]-1)*(nums[j]-1));
        //     }
        // }
        // return pq.top();
        
        //optimised solution
        priority_queue<int> pq(nums.begin(),nums.end());
        int ans=pq.top()-1;
        pq.pop();
        return ans*(pq.top()-1);
    }
};