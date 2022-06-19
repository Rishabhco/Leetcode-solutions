class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int num=1;
        set<int> st;
        for(int i=0;i<nums.size();i++){
            if(nums.at(i)>0){
                st.insert(nums.at(i));
            }
        }
        for(auto it=st.begin();it!=st.end();it++){
            if(num!=*it){
                return num;
            }else{
                num++;
            }
        }
        return num;
    }
};