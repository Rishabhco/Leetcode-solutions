class Solution {
public:
    struct myComp{
        bool operator()(pair<int,string> el1,pair<int,string> el2){
            if(el1.first<el2.first){
                return true;
            }
            if(el1.first==el2.first){
                if(el1.second>el2.second){
                    return true;
                }
            }
            return false;
        }
    };
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string> vec;
        map<string,int> mpp;
        priority_queue<pair<int,string>,vector<pair<int,string>>,myComp> pq;
        for(int i=0;i<words.size();i++){
            mpp[words[i]]++;
        }
        for(auto it:mpp){
            pq.push(make_pair(it.second,it.first));
        }
        for(int i=0;i<k;i++){
            vec.push_back(pq.top().second);
            pq.pop();
        }
        return vec;
    }
};