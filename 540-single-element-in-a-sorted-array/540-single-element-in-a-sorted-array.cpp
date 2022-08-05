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
        // for(int i=0;i<nums.size();i++){
        //     if(upper_bound(nums.begin(),nums.end(),nums[i])-lower_bound(nums.begin(),nums.end(),nums[i])==1){
        //         return nums[i];
        //     }
        // }
        // return 0;
        
        if(nums.size() == 1)
            return nums[0];
        int l = 0, r = nums.size()-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(mid == 0 && mid+1<nums.size() && nums[mid+1] != nums[mid])
                return nums[mid];
            if(mid == nums.size()-1 && mid-1>=0 && nums[mid-1] != nums[mid])
                return nums[mid];
            if(mid>0 && nums[mid] != nums[mid-1] && mid<nums.size()-1 && nums[mid] != nums[mid+1])
                return nums[mid];
            if(mid & 1){
                if(nums[mid] == nums[mid-1])
                    l = mid+1;
                else
                    r = mid-1;
            }
            else{
                if(nums[mid] == nums[mid+1])
                    l = mid+1;
                else
                    r = mid-1;
            }
        }
        return -1;
    }
};