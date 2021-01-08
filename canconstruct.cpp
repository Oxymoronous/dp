//given an array of strings and a target string
//determine whether it is possible to build up a string using the pieces of 
//strings from the given array
//the pieces from the array can be repeatedly used
//the pieces chosen cannot be split and then recombined again
//example "beef" and ["ee", "bf"] should produce the output false.
#include<bits/stdc++.h>
using namespace std;

int canConst(string target, string* array, int size){
    if (target == "") return 1;
    for(int i=0; i<size; i++){
        string ele = array[i]; //pieces from the array
        int len = ele.length();
        string sub = target.substr(0,len); //getting the prefix
        if(ele == sub){//if the piece from the array matches the prefix
            return canConst(target.substr(len,target.length()), array, size);
        }
    }
    return 0;
}

int main(){
    string a = "abcdef";
    string array[6] = {"ab","e", "dac","c","cd", "f"};
    int b = canConst(a, array, 6);
    cout << b << endl;
}

