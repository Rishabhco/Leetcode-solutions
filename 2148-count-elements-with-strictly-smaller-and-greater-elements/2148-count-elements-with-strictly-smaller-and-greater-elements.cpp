class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums[0]==nums[nums.size()-1]){
            return 0;
        }
        int min=*min_element(nums.begin(),nums.end()),max=*max_element(nums.begin(),nums.end());
        return nums.size()-count(nums.begin(),nums.end(),min)-count(nums.begin(),nums.end(),max);
    }
};