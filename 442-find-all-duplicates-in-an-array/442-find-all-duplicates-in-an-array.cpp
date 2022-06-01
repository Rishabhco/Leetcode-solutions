class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> arr(nums.size(),0),vec;
        for(int i=0;i<nums.size();i++){
            arr.at(nums.at(i)-1)=arr.at(nums.at(i)-1)+1;
        }
        for(int i=0;i<nums.size();i++){
            if(arr.at(i)==2){
                vec.push_back(i+1);
            }
        }
        return vec;
    }
};