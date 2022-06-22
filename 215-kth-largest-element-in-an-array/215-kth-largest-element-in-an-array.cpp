class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        multiset<int> st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums.at(i));
        }
        auto it=st.rbegin();
        advance(it,k-1);
        return *it;
    }
};