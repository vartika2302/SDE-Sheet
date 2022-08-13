class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>res(rowIndex+1);
        res[0]=1;
        if(rowIndex==0) return res;
        res[1]=rowIndex;
        int n=res[1];
        for(int i=2;i<=rowIndex;i++) {
            long long f = res[i-1];
            long long s = (n-1);
            long long num = f*s;
            res[i]=num/i;
            n--;
        }
        return res;
    }
};