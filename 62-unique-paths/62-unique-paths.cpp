class Solution {
public:
    int uniquePaths(int m, int n) {
        int N = n + m - 2,r = min(m-1,n-1);
        long res =1;
        for(int i=1;i<=r;i++){
            res=res*(N-r+i)/i;
        }
        return (int)res;
    }
};