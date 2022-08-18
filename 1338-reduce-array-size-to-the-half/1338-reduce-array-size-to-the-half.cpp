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
        
        set<int> st;
        
        int n = arr.size();
        int half = n / 2;
        
        unordered_map<int, int> mp;
        
        for(auto i : arr)
            mp[i]+=1;
        
        // for(auto i : mp)
        //     cout<<i.first<<" "<<i.second<<endl;
        
        priority_queue<pair<int, int>> pq;
        for(auto i : mp)
            pq.push({i.second, i.first});
        
        // while(!pq.empty()){
        //     cout<<pq.top().first<<" "<<pq.top().second<<endl;
        //     pq.pop();
        // }
        
        
        while(n > half){
            // pair<int, int> p = findmx(mp);
            pair<int, int> p = pq.top();
            pq.pop();
            //cout<<p.first<<" "<<p.second<<endl;
            st.insert(p.second);
            n-=p.first;
            //mp[p.first] = 0;
            
        }
        
        return st.size();
        
        
        
    }
};