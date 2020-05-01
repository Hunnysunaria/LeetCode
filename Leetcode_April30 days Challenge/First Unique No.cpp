class FirstUnique {
public:
    queue<int>s;
   unordered_map<int,int>mp;
       
    FirstUnique(vector<int>& nums) {
         for(int i:nums)
            ++mp[i];
        for(int i: nums)
            if(mp[i]== 1)
                s.push(i);
    }
    
    int showFirstUnique() {
        
        return s.size()?s.front(): -1;  
        
        
    }
    
    void add(int value) {
        
        int x= ++mp[value];
        if(x== 1)
            s.push(value);
        else while(s.size() && mp[s.front()]>1)
            s.pop();
        
    }
};

/**
 * Your FirstUnique object will be instantiated and called as such:
 * FirstUnique* obj = new FirstUnique(nums);
 * int param_1 = obj->showFirstUnique();
 * obj->add(value);
 */