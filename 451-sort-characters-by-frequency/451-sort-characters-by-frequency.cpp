class Solution {
public:
    string frequencySort(string s) {
        map<char,int> mpp;
        priority_queue<pair<int,char>> pq;
        string ans="";
        for(int i=0;i<s.length();i++){
            mpp[s.at(i)]++;
        }
        for(auto it:mpp){
            pq.push(make_pair(it.second,it.first));
        }
        while(!pq.empty()){
            for(int i=0;i<pq.top().first;i++){
                ans+=pq.top().second; 
            }
            pq.pop();
        }
        return ans;
    }
};