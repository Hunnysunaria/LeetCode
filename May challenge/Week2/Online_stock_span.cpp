class StockSpanner {
public:
    stack<int> st;
    unordered_map<int, int> map;
    
    StockSpanner() 
    {
        
    }
    
    int next(int price) 
    {
        if(st.empty())
        {
            st.push(price);
            map[price] = 1; //save value
            return map[price];  //return
        }
        
        int span = 0;
        
        while(!st.empty() && price >= st.top()) // price of the stock was less than or equal to today's price
        {
            span = span + map[st.top()];
            st.pop(); //the effective span of these prices have been considered.
        }
        
        st.push(price);
        map[price] = span+1; //store, +1 for the current day
        return map[price]; //return 
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */