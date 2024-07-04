class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //if there is a larger value in front of a smaller value then there is no profit to be made
        int profit = 0;
        int min = prices[0];
        for(int i{0};i<prices.size();++i) {
            if(prices[i] < min) { //keep track of the current smallest element
                min = prices[i];
            }
            if(prices[i]-min > profit) {
                profit = prices[i]-min;
            } 
        }




        return profit;
    }
};