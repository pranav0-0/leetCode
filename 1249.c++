// #include<iostream>
// #include<stack>
// #include<vector>
#include<bits/stdc++.h>

// const static auto initialize = [] {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
//     return nullptr;
// }();

using namespace std;
int main(){
    string s=")*";
    int out=0,counts=0;
    for(int i=0;i<s.size();++i){
        if(s[i]=='('){
            ++out;
        }
        else if(s[i]==')'){
            --out;
        }
        else{
            counts++;
        }
    }
    while(out<0 && counts>0){
        --counts;
        ++out;
    }
    while(out>0 && counts>0){
        --counts;
        --out;
    }
    cout<<out;
}