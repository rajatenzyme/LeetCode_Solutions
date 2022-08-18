class Solution {
public:
    
//     pair<int, int> findmx(unordered_map<int, int> mp){
//         int mx = INT_MIN;
//         int mx_ele;
//         for(auto x : mp){
//             if(x.second > mx){
//                 mx = x.second;
//                 mx_ele = x.first;
//             }            
//         }
        
//         return {mx_ele, mx};
        
//     }
    
    
    int minSetSize(vector<int>& arr) {
        
        int n = arr.size();
        int half = n / 2;
        
        unordered_map<int, int> mp;
        
        for(auto i : arr)
            mp[i]+=1;

        priority_queue<pair<int, int>> pq;
        for(auto i : mp)
            pq.push({i.second, i.first});
        
        int c = 0;
        while(n > half){
            pair<int, int> p = pq.top();
            pq.pop();
            c++;
            n-=p.first;
        }
        
        return c;
        
        
        
    }
};