class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums.at(i)]++;
            if(mpp[nums.at(i)]>=2){
                return true;
            }
        }
        return false;
    }
};