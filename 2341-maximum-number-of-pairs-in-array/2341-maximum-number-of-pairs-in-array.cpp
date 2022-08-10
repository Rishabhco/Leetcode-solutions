class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        map<int,int> mpp;
        vector<int> vec(2,0);
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto it:mpp){
            if(it.second%2!=0){
                vec[1]++;
            }
            vec[0]+=it.second/2;
        }
        return vec;
    }
};