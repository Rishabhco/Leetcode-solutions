class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max=*max_element(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(max<2*nums[i] && max!=nums[i]){
                return -1;
            }
        }
        return find(nums.begin(),nums.end(),max)-nums.begin();
    }
};