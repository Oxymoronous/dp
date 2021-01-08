#include<bits/stdc++.h>
using namespace std;

string powerset(int* array, int array_size){
    if (array_size == 0){
        return "";
    }
    string subset1 = "";
    string subset2 = "";
    for(int i = 0; i<array_size; i++){
        subset1 = powerset(array+1, array_size-1) + array[i];
        subset2 = powerset(array+1, array_size-1);
        cout << subset1 << endl;
        cout << subset2 << endl;
    }
}