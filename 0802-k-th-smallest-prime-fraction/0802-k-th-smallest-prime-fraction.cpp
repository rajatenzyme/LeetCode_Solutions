class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {

        priority_queue<pair<double, pair<int, int>>> pq;
        for(int i=0;i<arr.size()-1;i++){
            for(int j=i+1;j<arr.size();j++){
                pq.push({((double)arr[i]/arr[j]), {i,j}});
                if(pq.size() > k)
                    pq.pop();
            }
        }
        pair<int, int> res = pq.top().second;
    

        return {arr[res.first], arr[res.second]};
        
    }
};