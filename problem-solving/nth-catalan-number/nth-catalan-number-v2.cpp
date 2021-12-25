/**
Total Time Taken:
0.0/1.2
*/
class Solution
{
    public:
    //Function to find the nth catalan number.
    cpp_int findCatalan(int n) 
    {
        if(n==0||n==1)return 1;
        vector<cpp_int>dp(n+1,0);
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=n;i++){
            int f=0,l=i-1;
            while(f<=i-1){
                dp[i]+=dp[f]*dp[l];
                f++;
                l--;
            }
        }
        return dp[n];
    }
};
