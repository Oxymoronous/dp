class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> dp(num+1);
        dp[0] = 0;
        for(int i=1; i<=num;i++){
            //if i is a number of 2 power, num of bits = 1;
            //if i is odd, the number of bits of the previous + 1;
            //if i is even and not a power of two; 
            if((i&(i-1))==0)dp[i]=1;
            else if(i%2 == 1)dp[i] = dp[i-1]+1;
            else {
                int index = i/2;
                dp[i] = dp[index];
            }
        }
        return dp;
    }
};