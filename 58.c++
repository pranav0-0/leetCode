#include<iostream>
using namespace std;

const static auto initialize = [] {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();

int main(){
    string s="a";
    auto count=0;
    while(s[s.size()-1]==' ') s.pop_back();
    while(isalpha(s[s.size()-1])){
        s.pop_back();
        count++;
    }
    cout<<count;
}