class Solution {
public:
    int triangularSum(vector<int>& nums) {
        vector<int> newNums;
        while(nums.size()!=1){
            for(int i=0;i<nums.size()-1;i++){
                newNums.push_back((nums[i]+nums[i+1])%10);
            }
            nums.clear();
            nums=newNums;
            newNums.clear();
        }
        return nums[0];
    }
};