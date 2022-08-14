class Solution {
private:
    int f(int n, vector<int>& dp){
        if(n<=1) return n;
        if(dp[n]!=-1) return dp[n];
        return dp[n]=fib(n-1)+fib(n-2);
    }
public:
    int fib(int n) {
        // vector<int>dp(n+1,-1);
        // return f(n,dp);
        
        vector<int>dp(n+1,0);
        int prev2=0;
        int prev=1;
        for(int i=2;i<=n;i++){
           int curr=prev+prev2;
            prev2=prev;
            prev=curr;
        }
        if(n==0)
        return prev2;
        else return prev;
    }
};