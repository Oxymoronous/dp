//given an array of integers and a sum, print all subsets of given array with
//sum equal to given sum
//assumption: array consists of only positive integers

#include<bits/stdc++.h>
using namespace std;

string perfectsum(int* array, int sum, int size){
    if(sum == 0) return " ";
    if(size == 0) return "";
    if(perfectsum(array+1, sum, size-1).length()){
        string ans = perfectsum(array+1, sum, size-1) + " ";
        cout << ans << endl;
        return ans;
    }
    if(perfectsum(array+1, sum-array[0], size-1).length()) {
        string ans = perfectsum(array+1, sum-array[0], size-1) + to_string(array[i]) + " ";
        cout << ans << endl;
        return ans;
    }
    return "";
}
