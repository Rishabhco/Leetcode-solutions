class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> vec;
        map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums.at(i)]++;
        }
        for(auto it:mpp){
            if(it.second>(nums.size()/3)){
                vec.push_back(it.first);
            }
        }
        return vec;
    }
};