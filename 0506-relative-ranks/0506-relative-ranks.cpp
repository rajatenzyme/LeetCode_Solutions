class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        
        unordered_map<int, int> mp;

        for(int i=0;i<score.size();i++){
            mp[score[i]] = i;
        }

        sort(score.begin(), score.end(), greater<int>());

        vector<string>res(score.size());

        for(int i=0;i<score.size();i++){
            if(i == 0){
                res[mp[score[i]]] = "Gold Medal";
            } else if(i == 1){
                res[mp[score[i]]] = "Silver Medal";
            } else if(i == 2){
                res[mp[score[i]]] = "Bronze Medal";
            } else{
                res[mp[score[i]]] = to_string(i+1);
            }
        }

        return res;

    }
};