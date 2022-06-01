class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums.at(i));
        }
        int j=0;
        for(auto it=st.begin(); it!=st.end(); it++){
            nums.at(j)=* it;
            j++;
        }
        return st.size();
    }
};