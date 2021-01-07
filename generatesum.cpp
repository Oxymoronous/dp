//possible to generate sum from an array of non-negative integers

#include<bits/stdc++.h>
using namespace std;

unordered_map<int, int> memo =  {
    {0,1}
};

int canSum(int target, int* array, int array_size){
    if(target == 0) return 1;
    if(target < 0) return 0;
    for(int i = 0; i<array_size; i++){
        int choice = array[i];
        if(choice == 0) continue;
        if(target-choice>=0){
            if(canSum(target-choice, array, array_size)) return 1;
        }
    }
    return 0;
}

int canSum(int target, int* array, int array_size){
    int i;
    for(int i = 0; i<array_size; i++){
        int choice = array[i];
        if(memo[choice]) return 1;
        if((target-choice)<0) continue;
        if((target-choice) == 0) return 1;
        if(canSum(target-choice, array, array_size){
            memo[target-choice] = 1;
            return 1;
        }
    }
    return 0; 
}

int main(){
    int array[3] = {2,3,5};
    int ans = canSum(8, array, 3);
    cout << ans << endl;
}