/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    let profit = 0;
    let minBuy = prices[0];    
    
    for(let i=1; i<prices.length; i++) {
        profit = Math.max(profit, prices[i]-minBuy);
        minBuy = Math.min(prices[i], minBuy);
    }
    return profit;
};

