class NumArray {
public:
    NumArray(vector<int>& nums) {
        num.push_back(nums.at(0));
        cout<<num.at(0)<<" ";
        for(int i=1;i<nums.size();i++){
            num.push_back(nums.at(i)+num.at(i-1));
            cout<<num.at(i)<<" ";
        }
    }
    
    int sumRange(int left, int right) {
        if(left==0)
            return num.at(right);
        else
            return num.at(right)-num.at(left-1);
    }
private:
    vector<int> num;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */