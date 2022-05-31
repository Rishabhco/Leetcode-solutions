class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       vector<int> arr,farr;
       for(int i=0;i<nums.size();i++){
          if(nums.at(i)==target){
              arr.push_back(i);
          }
       }
       if(arr.size()==0){
           farr.push_back(-1);
           farr.push_back(-1);
       }else{
           farr.push_back(arr.at(0));
           farr.push_back(arr.at(arr.size()-1));
       }
        return farr;
    }
};