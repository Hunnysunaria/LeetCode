class Solution {
public:
    
    int numsquare(int n){
         int square=0;
        while(n){
           
            square+=(n%10)*(n%10);
            n=n/10;
        }
        return square;
    }
    bool isHappy(int n) {
  set<int> st; 
    while (1) 
    { 
        n = numsquare(n); 
        if (n == 1) 
            return true; 
        if (st.find(n) != st.end()) 
            return false; 
        st.insert(n); 
    }
  
    }
    
    
};