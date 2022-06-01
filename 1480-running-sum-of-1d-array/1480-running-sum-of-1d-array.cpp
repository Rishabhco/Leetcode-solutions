class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(i==0){
                nums.at(i)=nums.at(i);
            }else{
                nums.at(i)=nums.at(i)+nums.at(i-1);
            }
        }
        return nums;
    }
};