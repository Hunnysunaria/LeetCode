class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       unordered_map<char,int>mp;
        
    
        
        for(int c: magazine){
            
            if(mp.find(c) != mp.end()){
                
                int count = mp[c]+1;
                mp[c]= count;
            }
            else
                mp.insert({c,1});
           
        }
        
      for(char c: ransomNote){
          if(mp.find(c) == mp.end())
              return false;
          
          int count = mp[c];
          
          if(count== 0)
              
              return false;
          
          mp[c] = count -1;
      }
        return true;
    }
};