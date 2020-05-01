class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_prof=0;
     if(prices.size()<= 1){
         return max_prof;
     }
        for(int i=1;i<prices.size();i++){
            if(prices[i]>prices[i-1]){
            max_prof+=(prices[i]-prices[i-1]);

            }
        }
        return max_prof;
    }
};
