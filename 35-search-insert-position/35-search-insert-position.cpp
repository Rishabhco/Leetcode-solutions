class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(target>nums.at(nums.size()-1)){
            return nums.size();
        }else{
            for(int i=0;i<nums.size();i++){
                if(nums.at(i)==target){
                   return i;
                }else if(nums.at(i)>target){
                   return i;
                }
            }
        }
        return 0;
    }
    
};