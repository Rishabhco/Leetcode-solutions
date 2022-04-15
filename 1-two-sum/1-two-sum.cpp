class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> val;  
        for(auto n=0;n<nums.size();n++){
            for(auto m=n+1;m<nums.size();m++){
                if( nums[n] + nums[m] == target){
                     val.push_back(n);
                     val.push_back(m);
                     break;
                }
            }
        }
        return val;
    }
};