class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> dp(num+1); //Q: if the <(num+1)> part is not included, this code will run into some memory issues with null pointer
                                // I always thought the () after a vector is sort of an optional thing when we know the size of the vector beforehand, is it?
        dp[0] = 0;
        for(int i=1; i<=num;i++){
            //if i is a number of 2 power, num of bits = 1;
            //if i is odd, the number of bits of the previous + 1;
            //if i is even and not a power of two; 
            if((i&(i-1))==0){
                dp.push_back(1);
            }
            else if(i%2 == 1){
                dp.push_back(dp[i-1]+1);
            }
            else {
                int index = i/2;
                dp.push_back(dp[index]);
            }
        }
        return dp;
    }
};