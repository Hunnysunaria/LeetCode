
class trie_node{
  public:
       unordered_map<char,trie_node*>mp;
       bool isend;  
    trie_node(){
        
        isend= false;
    }
};

trie_node *root;






class Trie {
public:
    /** Initialize your data structure here. */
    
    Trie() {
     
             root= new trie_node();
        
    }
    
   
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        trie_node *current = root;
        for(char ch: word){
            
            if(current->mp.find(ch)== current->mp.end()){
                
                current->mp[ch]= new trie_node; 
              
            }
              current = current->mp[ch];
        }
        current->isend= true;
        
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
      
        
        trie_node  *current= root;
        for(char ch: word){
            
            if(current->mp.find(ch)== current->mp.end()){
                
                return false;
            }
            current= current->mp[ch];
        }
        
         return current->isend;
        
       
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        
     trie_node  *current= root;
        
        for(char ch: prefix){
            
            if(current->mp.find(ch)== current->mp.end() ){
                
                return false;
               
            }
             current= current->mp[ch];
        }
        
   return true;    
        
        
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */