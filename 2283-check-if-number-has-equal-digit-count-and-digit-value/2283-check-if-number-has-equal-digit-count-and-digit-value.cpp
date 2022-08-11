class Solution {
public:
    bool digitCount(string num) {
        vector<int> nums;
        for(int i=0;i<num.length();i++){
            nums.push_back(num[i]-48);
        }
        for(int i=0;i<nums.size();i++){
            if(count(nums.begin(),nums.end(),i)!=num[i]-48){
                return false;
            }
        }
        return true;
    }
};