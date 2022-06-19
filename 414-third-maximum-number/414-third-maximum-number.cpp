class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums.at(i));
        }
        auto it=st.rbegin();
        if(st.size()<3){
            return *it;
        }else{
            advance(it,2);
            return *it;
        }
        return 0;
    }
};