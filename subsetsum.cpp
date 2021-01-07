//given an array of integers, determine if it is possible to obtain a subset that sums up
//to a given target sum
//(a boolean function) difficulty level: medium
//dp

#include<bits/stdc++.h>
using namespace std;
unordered_map<int, int> memo = {
    {0,1}
};
int subsetsum(int* array, int sum, int array_size){
    if (memo[sum]) return 1;
    //if(sum == 0) return 1;
    if(array_size == 0) return 0;
    if(sum < 0) return 0;
    if(subsetsum(array+1, sum, array_size-1)) {
        memo[sum] = 1;
        return 1;
    }
    if(subsetsum(array+1, sum-array[0], array_size-1)) {
        memo[sum-array[0]] = 1;
        return 1;
    }
    return 0;    
}

int main(){
    int array[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int ans = subsetsum(array, 120, 15);
    cout << ans << endl;
}