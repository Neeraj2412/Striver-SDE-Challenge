/*
The brute force approch would be traversing the whole array for a particular index and get the maximum out of it
Time would be O(N^2); 
*/

/*
We can always maintain a has mapp
Time would be O(nlogn) or it can be O(N^2) in case of unordered_map if there are collisions  
*/

/*
Optimal Solution
O(N) time at worst case and no extra space;
*/

#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int n = prices.size();
    int maxProfit = prices[1] - prices[0], minVal = prices[0];
    for(int i=1;i<n;i++){
        if((prices[i] - minVal) >= maxProfit){
            maxProfit = (prices[i] - minVal);
        }
        if(prices[i] < minVal){
            minVal = prices[i];
        }
    }
    if(maxProfit < 0){
        maxProfit = 0;
    }
    return maxProfit;
}