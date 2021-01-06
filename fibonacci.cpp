//fibonacci with dp
#include<bits/stdc++.h>
using namespace std;


int fib(n){
    vector<int> memo;
    int i;
    memo.push_back(0);
    memo.push_back(1);
    for(i=2;i<=n;i++){
        int a = memo[i-1];
        int b = memo[i-2];
        memo.push_back(a+b);
    }
    return memo[n]; 
}

//how to code with dp with recursion
//does cpp support the style <if ... in ...>
//do recursion with something like .size()?

int main(){
    int test = fib(10);
    cout << test << endl;
    return 0;
}