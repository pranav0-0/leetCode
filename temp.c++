#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

const static auto initialize = [] {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();

int main()
{
    unordered_map <int,int> m;
    for(int i=0;i<10;i++){
        m[rand()]=i;
    }
    for(auto i:m) cout<<i.first<<" "<<i.second<<endl;
}