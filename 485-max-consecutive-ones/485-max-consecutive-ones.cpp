class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int> vec;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
            }else{
                vec.push_back(count);
                count=0;
            }
        }
        if(count !=0)
            vec.push_back(count);
        return *max_element(vec.begin(),vec.end());
    }
};