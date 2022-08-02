class Solution {
public:
    int missingNumber(vector<int>& nums) {
        map<int,int> mpp;
        int n=0;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto it:mpp){
            if(it.first==n)
                n++;
            else
                return n;
        }
        return n;
    }
};