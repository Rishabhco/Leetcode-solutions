class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // map<int,int> mpp;
        // for(int i=0;i<nums.size();i++){
        //     mpp[nums[i]]++;        
        // }    
        // for(auto it:mpp){
        //     if(it.second==1)
        //         return it.first;
        // }
        // return 0;
        
        //upper_bound and first occurence
        for(int i=0;i<nums.size();i++){
            if(upper_bound(nums.begin(),nums.end(),nums[i])-lower_bound(nums.begin(),nums.end(),nums[i])==1){
                return nums[i];
            }
        }
        return 0;
    }
};