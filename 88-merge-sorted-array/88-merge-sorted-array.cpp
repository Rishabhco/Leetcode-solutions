class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       multiset<int> ms;
       for(int i=0;i<m;i++){
           ms.insert(nums1.at(i));
       }
         for(int i=0;i<n;i++){
           ms.insert(nums2.at(i));
       }
       vector<int> v(ms.begin(),ms.end());
       nums1.swap(v);
    }
};