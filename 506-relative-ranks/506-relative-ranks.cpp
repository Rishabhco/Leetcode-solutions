class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<score.size();i++){
            pq.push(make_pair(score[i],i));
        }
        vector<string> answer(score.size(),"");
        for(int i=0;i<score.size();i++){
            if(i==0){
                answer[pq.top().second]="Gold Medal";
            }else if(i==1){
                answer[pq.top().second]="Silver Medal";
            }else if(i==2){
                answer[pq.top().second]="Bronze Medal";
            }else{
                answer[pq.top().second]=to_string(i+1);
            }
            pq.pop();
        }
        return answer;
    }
};