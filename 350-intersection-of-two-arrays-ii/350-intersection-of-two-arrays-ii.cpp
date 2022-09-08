class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> vec;
        map<int,int> mpp1;
        map<int,int> mpp2;
        for(int i=0;i<nums1.size();i++){
            mpp1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            mpp2[nums2[i]]++;
        }
        for(auto it:mpp1){
            if(mpp2.find(it.first)!=mpp2.end()){
                int count=min(it.second,mpp2[it.first]);
                for(int i=0;i<count;i++){
                    vec.push_back(it.first);
                }
            }
        }
        return vec;
    }
};