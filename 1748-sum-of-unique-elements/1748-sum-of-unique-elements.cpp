class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int,int> mpp;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto it:mpp){
            if(it.second==1){
                sum+=it.first;
            }
        }
        return sum;
    }
};