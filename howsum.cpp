#include<bits/stdc++.h>
#include<string>
using namespace std;

unordered_map<int, string> memo = {
    {0, " "}
};

string howSum(int target, int* array, int array_size){
    if (memo[target].length()) return memo[target];
    if(target == 0) return " ";
    if(target < 0) return "";
    for(int i=0; i<array_size; i++){
        int remainder = target - array[i];
        if(howSum(remainder, array, array_size).length()){
            string str = to_string(array[i]); //converts the number to a string for concantenation purposes
            memo[remainder] = howSum(remainder, array, array_size);
            return howSum(remainder, array, array_size) + str + " ";
        }
    }
    return "";
}

int main(){
    int array[1] = {1};
    string ans = howSum(5, array, 1);
    cout << ans << endl;
}