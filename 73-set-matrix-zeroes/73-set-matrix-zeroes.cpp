class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        // Using m*n space approach
        int n = matrix.size();
        int m = matrix[0].size();
//         vector<vector<int>> temp = matrix;
//         // for(int i=0;i<n;i++){
//         //     for(int j=0;j<m;j++){
//         //         temp[i][j] = matrix[i][j];
//         //     }
//         // }
        
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(temp[i][j]==0) {
//                     for(int k=0;k<m;k++){
//                         matrix[i][k]=0;
//                     }
//                     for(int k=0;k<n;k++){
//                         matrix[k][j]=0;
//                     }
//                 }
//             }
//         }
        
        
        
        // Brute
        // Time complexity - O(m*n)*O(m+n)
        // Space complexity - O(1)
        // If every element in matrix is positive, then only this is valid
//         for(int i=0;i<n;i++) {
//             for(int j=0;j<m;j++) {
//                 if(matrix[i][j]==0) {
//                     for(int k=0;k<m;k++) {
//                         if(matrix[i][k]!=0) matrix[i][k]=-1;
//                     }
//                     for(int k=0;k<n;k++){
//                         if(matrix[k][j]!=0) matrix[k][j]=-1;
//                     }
//                 }
//             }
//         }
        
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(matrix[i][j]==-1) matrix[i][j]=0;
//             }
//         }
        
        
        // Better
        // Time complexity - O(m*n)+O(m*n)
        // Space complexity - O(m+n)
        
//         vector<int>rows(n,-1),cols(m,-1);
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(matrix[i][j]==0) {
//                     rows[i]=0;
//                     cols[j]=0;
//                 }
//             }
//         }
        
//        for(int i=0;i<n;i++){
//            for(int j=0;j<m;j++){
//                if(rows[i]==0 || cols[j]==0) matrix[i][j]=0;
//            }
//        }
        
        
        
        //  Best
        // Time complexity - O(m*n)+O(m*n)
        // Space complexity - O(1)
        
        
        int cols0=1;
        for(int i=0;i<n;i++){
            if(matrix[i][0]==0) cols0=0;
            for(int j=1;j<m;j++) {
                if(matrix[i][j]==0) {
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        
        for(int i=(n-1);i>=0;i--) {
            for(int j=(m-1);j>=1;j--) {
                if(matrix[i][0]==0 || matrix[0][j]==0) matrix[i][j]=0;
            }
            if(cols0==0) matrix[i][0]=0;
        }
        
    }
};