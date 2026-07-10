class Solution {
public:
    // int solve(int n){
    //     if(n<0 || n==1){
    //         return 1;
    //     }
    //     if(n==2) return 2;
    //     return solve(n-1)+solve(n-2);
    // }
    int climbStairs(int n) {
        vector<int> dp(n+1);
        dp[1]=1;
        if(n==1) return 1;
        dp[2]=2;
        for(int i=3;i<=n;i++){
            dp[i]=dp[i-2]+dp[i-1];
        }
        return dp[n];
    }
};
