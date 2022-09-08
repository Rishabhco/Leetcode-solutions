class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int numEle=(arr.size())/20;
        double sum=accumulate(arr.begin()+numEle,arr.end()-numEle,0);
        return sum/(arr.size()-(2*numEle));
    }
};