class KthLargest {
public:
    multiset<int> st;
    int count=0;
    KthLargest(int k, vector<int>& nums){
        for(int i=0;i<nums.size();i++){
            st.insert(nums.at(i));
        }
        count=k;
    }
    int add(int val){
        st.insert(val);
        auto it=st.rbegin();
        advance(it,count-1);
        return *it;
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */