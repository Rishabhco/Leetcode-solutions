class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> mpp;
        priority_queue<pair<int,char>,vector<pair<int,char>>,greater<pair<int,char>>> pq;
        for(int i=0;i<s.length();i++){
            mpp[s[i]]++;
        }
        for(auto it:mpp){
            if(it.second==1)
                pq.push(make_pair(s.find(it.first),it.first));
        }
        if(pq.empty()){
            return -1;
        }
        return pq.top().first;
    }
};