class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> m;
	    for (int i = 0; i < nums.size(); i++){
		    auto it = m.find(nums[i]);
		    if (it != m.end()){
			    if (abs(it->second - i) <= k)
				    return true;
		    }
		    m[nums[i]] = i;
	    }
	    return false;	
    }
};