//given a string, check if the string can be constructed by repeatedly adding up exactly one of its substrings
//assumption: a string cannot has itself as its substring.
//use dp?
//print the substring if such substring exists? idk if i can do this gg

#include<bits/stdc++.h>
#include<string>
using namespace std;

int substrdetect(string str, string sub){
    if (str == "") return 1;
    if(sub.length()){ //if a substring is being tested
        if(str.substr(0, sub.length()) == sub){ //if the prefix of the target string matches with the substring
            return substrdetect(str.substr(sub.length(),str.length()),sub);
        }
        return 0;
    }
    int len = str.length()
    for(int i=0; i<len; i++){
        sub = str.substr(0, i);
        if(substrdetect(str, sub)){
            return 1;
        }
    }
    return 0;
}

int main(){
    int sol = substrdetect("abaabaaba", "");
    cout << sol << endl;
}
