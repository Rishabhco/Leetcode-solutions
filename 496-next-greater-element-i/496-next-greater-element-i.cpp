class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        // vector<int> vec;
        // for(int i=0;i<nums1.size();i++){
        //     auto it=find(nums2.begin(),nums2.end(),nums1[i]);
        //     if(it!=nums2.end() && it != (nums2.end()-1)){
        //         auto itt=upper_bound(it,nums2.end(),*it);
        //         if(itt!=nums2.end()){
        //             vec.push_back(*itt);
        //         }else{
        //             vec.push_back(-1);
        //         }
        //     }else{
        //         vec.push_back(-1);
        //     }
        // }
        // return vec;
        
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    int count=0;
                    for(int k=j+1;k<nums2.size();k++){
                        if(nums2[j]<nums2[k]){
                            ans.push_back(nums2[k]);
                            count++;
                            break;
                        }
                    }
                    if(count==0)
                        ans.push_back(-1);
                
                break;
                }
            }
        }
        
        return ans;
    }
};