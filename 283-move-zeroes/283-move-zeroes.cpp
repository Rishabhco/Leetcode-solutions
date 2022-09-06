class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        int count=0,k=0,j=nums.size()-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count++;
            }else{
                pq.push(make_pair(i,nums[i]));
            }
        }
        while(!pq.empty()){
            nums[k]=pq.top().second;
            k++;
            pq.pop();
        }
        for(int i=0;i<count;i++){
            nums[j]=0;
            j--;
        }
    }
};