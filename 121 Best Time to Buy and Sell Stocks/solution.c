// this question was easy but the cases to get solved in this question were tricky one

#include<stdio.h>

int maxProfit(int* prices, int pricesSize) {
    int min = prices[0];
    int maxProfitSoFar = 0;
    
    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < min) {
            min = prices[i];              
        } else if (prices[i] - min > maxProfitSoFar) {
            maxProfitSoFar = prices[i] - min;   
        }
    }
    return maxProfitSoFar;
}
