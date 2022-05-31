class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       vector<int> arr,farr(2,-1);
       for(int i=0;i<nums.size();i++){
          if(nums.at(i)==target){
              arr.push_back(i);
          }
       }
       if(arr.size()==0){
           return farr;
       }else{
           farr.at(0)=arr.at(0);
           farr.at(1)=arr.at(arr.size()-1);
           return farr;
       }
        return farr;
    }
};