class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       int li=0,hi=numbers.size()-1;
        while(numbers[li]+numbers[hi]!=target){
            if(numbers[li]+numbers[hi]<target){
                li++;
            }else{
                hi--;
            }
        }
        return vector<int>({li+1,hi+1});
    }
};