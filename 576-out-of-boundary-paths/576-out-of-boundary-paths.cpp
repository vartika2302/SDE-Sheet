class Solution {
    int mod = (int)(1e9+7);
    
    // Rec + Mem
   int f(int i,int j,int m,int n, int maxMove,vector<vector<vector<int>>>& dp) {
        if(maxMove>=0 && (i==0 || j==0 || i>m || j>n)) return 1;
        if(maxMove==0) return 0;
        if(dp[i+1][j+1][maxMove]!=-1) return dp[i+1][j+1][maxMove]; 
        int top=f(i-1,j,m,n,maxMove-1,dp)%mod;
        int bottom=f(i+1,j,m,n,maxMove-1,dp)%mod;
        int left = f(i,j-1,m,n,maxMove-1,dp)%mod;
        int right = f(i,j+1,m,n,maxMove-1,dp)%mod;
        return dp[i+1][j+1][maxMove]=(((top+bottom)%mod+left)%mod+right)%mod;
   }

public:
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        vector<vector<vector<int>>>dp(m+2,vector<vector<int>>(n+2,vector<int>(maxMove+1,-1)));
        return f(startRow+1,startColumn+1,m,n,maxMove,dp);
        
        
        // Tabulation
        // vector<vector<vector<int>>>dp(m,vector<vector<int>>(n,vector<int>(maxMove+1,0)));
        
        
        
    }
};