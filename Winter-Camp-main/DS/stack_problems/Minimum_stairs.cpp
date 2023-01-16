// Without Dynamic programming 
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        for(int i=2;i<cost.size();i++)
            cost[i]=min(cost[i-1],cost[i-2])+cost[i];
        return min(cost[cost.size()-1],cost[cost.size()-2]);
    }
};

// Using Dynamic Programming
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        
        int dp[n+1];
        dp[0] = cost[0];
        dp[1] = cost[1];
        
        for(int i = 2; i < n;i++){
            dp[i] = cost[i] + (min(dp[i-1], dp[i-2]));
        }
        return min(dp[n-2], dp[n-1]);
    }
};
