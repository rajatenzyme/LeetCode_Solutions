class MyCalendar {
public:
    
    map<int, int> mp;
    
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        
        //  for(auto it=m.begin();it!=m.end();it++){
        //     if((start<it->second&&start>=it->first)||(start<it->first&&end>=it->second)||(end<=it->second&&end>it->first)){
        //         return false;
        //     }
        // }
        // m[start]=end;
        //return true;
        
//         cout<<"hellp";
        
        
//         for(auto x : mp){
//             cout<<x.first<<" "<<x.second<<endl;
//         }
        
//         //mp[start] = end;
        
//         for(auto x : mp){
//             if( (x.second > start && x.first<=start)
//                 || (x.first>start && x.second<=end ) 
//                 || (x.second >= end && x.first<end)
              
//             )
//                 return false;    
//         }
//         mp[start] = end;
//         return true;
        
        auto it = mp.upper_bound(start);
		// it->first = min end time greater than start
		// it->second = start time of above obtained end time
        if (it == mp.end() || it->second >= end)
        {
            mp[end] = start;
            return true;
        }
        else
            return false;
        
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */