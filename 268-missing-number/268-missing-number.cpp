class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // map<int,int> mpp;
        // int n=0;
        // for(int i=0;i<nums.size();i++){
        //     mpp[nums[i]]++;
        // }
        // for(auto it:mpp){
        //     if(it.first==n)
        //         n++;
        //     else
        //         return n;
        // }
        // return n;
        
        
        int n = nums.size();
        int ans = 0;
        n = n*(n+1)/2;
        for(auto i : nums) ans+= i;
        return n - ans;
    }
};