class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> arr(nums.size()-1,0);
        for(int i=0;i<nums.size();i++){
            arr.at(nums.at(i)-1)=arr.at(nums.at(i)-1)+1;
        }
        for(int i=0;i<arr.size();i++){
            if(arr.at(i)>1){
                return i+1;
            }
        }
        return 0;
    }
};