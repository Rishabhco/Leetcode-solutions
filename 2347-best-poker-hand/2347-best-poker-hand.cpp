class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        map<char,int> mpp1;
        map<int,int> mpp2;
        for(int i=0;i<ranks.size();i++){
            mpp2[ranks[i]]++;
        }
        for(int i=0;i<suits.size();i++){
            mpp1[suits[i]]++;
        }
        for(auto it:mpp1){
            if(it.second==5){
                return "Flush";
            }
        }
        for(auto it:mpp2){
            if(it.second>=3){
                return "Three of a Kind";
            }
        }
        for(auto it:mpp2){
            if(it.second==2){
                return "Pair";
            }
        }
        return "High Card";
    }
};