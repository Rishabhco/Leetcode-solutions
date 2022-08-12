class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> vec;
        sort(nums.begin(),nums.end());
        if(binary_search(nums.begin(),nums.end(),target)){
            for(int i=find(nums.begin(),nums.end(),target)-nums.begin();i<upper_bound(nums.begin(),nums.end(),target)-nums.begin();i++){
                vec.push_back(i);
            }
        }
        sort(vec.begin(),vec.end());
        return vec;
    }
};