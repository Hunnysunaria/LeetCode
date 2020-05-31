class Solution {
public:
    string frequencySort(string s) {
        map<char,int> mp;
        string str=" ";
        
        priority_queue<pair<int, char> , vector<pair<int,char>> > mx_heap;
        for(int i=0;i<s.length();i++){
            
            mp[s[i]]++;
        }
        for(auto &x: mp){
            mx_heap.push({x.second, x.first});
        }
        
        while(!mx_heap.empty()){
            
            int hFchar = mx_heap.top().first;
            char c= mx_heap.top().second;
        }
        
        for(int i=0;i<hfchar ;i++){
            
            str+= c;
        }
        mx_heap.pop();
        
        return str;
      
        
        make_heap(mp.begin(),mp.end());
        
        
       
        return str;
        
    }
};