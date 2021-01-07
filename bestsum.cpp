//given an array of positive integers and a target sum, find the shortest possible
//combination that could generate the target sum
//all elements in the given array can be repeatedly used
//example: given target = 7 and array = {3,4,5,7}
//output should give 7 although 3,4 is also a legitimate combination

#include<bits/stdc++.h>
#include<string>
using namespace std;

unordered_map<int, string> memo = {
  {0, " "}
};

string bestsum(int target, int* array, int array_size){
    if (memo[target].length()) return memo[target];
    if (target == 0) return " ";
    if (target < 0) return "";
    string tmp = "";
    for(int i = 0; i<array_size; i++){
        int choice = array[i];
        int remainder = target - choice;
        string combination = bestsum(remainder, array, array_size);
        if(combination.length()){
            combination += (to_string(choice) + " ");
            if((combination.length() < tmp.length())||(tmp == "")){
                tmp = combination;
            }
        }
        memo[target] = tmp;
    }
    return tmp;
}

int main(){
    int array[5] = {100, 4, 25, 5, 20};
    string ans = bestsum(100, array, 5);
    cout << ans << endl;
}
