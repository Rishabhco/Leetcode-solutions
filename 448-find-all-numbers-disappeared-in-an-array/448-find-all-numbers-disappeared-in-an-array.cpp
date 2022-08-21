class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> vec;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size()+1;i++){
            if(!binary_search(nums.begin(),nums.end(),i)){
                vec.push_back(i);
            }
        }
        return vec;    
    }
};