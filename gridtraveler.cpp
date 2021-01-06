//number of ways to travel from a top left 2D grid to the bottom right
//only possible moves are to either move down or move right

#include<bits/stdc++.h>
typedef unsigned long long ull;
using namespace std;

ull gridtraveler(int row, int col){
    //memoization, initializing the memo? idk
    ull memo[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if((i==0)&&(j==0)){
                memo[i][j] = 0;
            }else{
                if((i-1<0)||(j-1<0)){
                    memo[i][j] = 1;
                }
                else{
                    memo[i][j] = memo[i-1][j]+memo[i][j-1];
                }
            }
        }
    }
    /*recursive version w/o dp
    if((row == 0)||(col == 0)) return 0;
    if((row == 1)&&(col == 1)) return 1;
    return gridtraveler(row-1,col)+gridtraveler(row,col-1);
    */
    return memo[row-1][col-1];
}

int main(){
    ull s1 = gridtraveler(1,1);
    ull s2 = gridtraveler(2,3);
    ull s3 = gridtraveler(3,2);
    ull s4 = gridtraveler(3,3);
    ull s5 = gridtraveler(18,18);
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl;
}