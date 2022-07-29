class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        
        vector<int> dist(n+1, INT_MAX);
        
        vector<pair<int, int>> adj[n+1];
        
        for(auto x : times){
            adj[x[0]].emplace_back(x[1], x[2]);
        }
        
        
        priority_queue<pair<int, int> , vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, k}); //{0,2};
        dist[k] = 0;
        while(!pq.empty()){
            
            //int distance = pq.top().first; // 0
            int u = pq.top().second; // 2
            pq.pop();
            for(auto x : adj[u]){ //2->1 & 3
                int v = x.first; // 1
                int w = x.second; //1
                
                if(dist[v] > dist[u] + w){
                    dist[v] = dist[u] + w;
                    pq.push({dist[v], v});
                }
            } 
            
            
            
        }
        
        int ans = *max_element(dist.begin()+1, dist.end());
        return ans == INT_MAX ? -1 : ans;
        
        
    }
};