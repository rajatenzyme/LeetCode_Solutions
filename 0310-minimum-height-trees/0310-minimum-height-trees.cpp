class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {

        vector<unordered_set<int>> graph(n);

        for(auto e: edges){
            graph[e[0]].insert(e[1]);
            graph[e[1]].insert(e[0]);
        }

        vector<int> degree(n, 0);
        for(int i=0; i<n; i++) degree[i]=graph[i].size();
        for(int i=0, j, remain=n; i<n && remain>2; i++){
            vector<int> del; // nodes to delete
            for(j=0; j<n; j++){
                if(degree[j]==1) {
                    remain--;
                    del.push_back(j);
                    degree[j]=-1;
                }
            }
            for(auto k: del){ //delete this node and all connected edges 
                for(auto neigh: graph[k]) degree[neigh]--;
            }
        }
        vector<int> res;
        for(int i=0; i<n; i++){
            if(degree[i]>=0) res.push_back(i);
        }
        return res;
        
    }
};