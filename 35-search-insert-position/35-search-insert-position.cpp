class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int found=0;
        bool f=false;
        for(int i=0;i<nums.size();i++){
           if(nums.at(i)==target){
               found=i;
               f=true;
               break;
           }
        }
        if(!f){
            if(nums.at(nums.size()-1)<target){
                 found=nums.size();
             }else{
                for(int i=0;i<nums.size();i++){
                    if(nums.at(i)>target){
                        found=i;
                        break;
                    }
                } 
            }
        }
        return found;
    }
};