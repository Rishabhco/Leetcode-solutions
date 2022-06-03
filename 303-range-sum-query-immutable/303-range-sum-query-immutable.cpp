class NumArray {
public:
    NumArray(vector<int>& nums) {
        // for(int i=0;i<nums.size();i++){
        //     num.push_back(nums.at(i));
        // }
        num=nums;
    }
    
    int sumRange(int left, int right) {
        int sum=0;
        for(int i=left;i<=right;i++){
            sum+=num.at(i);
        }
        return sum;
    }
private:
    vector<int> num;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */