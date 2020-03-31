
/*
    Notice that "You may complete as many transactions as you like (i.e., buy one and sell one share of the stock multiple times)". The maximum profit is the sum of all sub profits you can obtain by traversing the array from beginning to end, buying into every opportunity "today" where you know the price "tommorrow" will be greater than today
*/
int maxProfit(int* prices, int pricesSize){
    int profit = 0;
    for(int i = 0 ; i < pricesSize-1;i++)
    {
        if(prices[i+1] - prices[i] > 0)
            profit += prices[i+1] - prices[i];
    }
    return profit;
}

