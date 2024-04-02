#include<iostream>
#include<vector>
using namespace std;

const static auto initialize = [] {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();

int main(){
    vector<vector<int>> m = {{1,1,0},{1,0,1}},msum;
    vector<int>colsum,rowsum;
    for(int i=0;i<m.size();i++){
        int l=0,sum=0;
        while(m[i].size()!=l){
            sum +=m[i][l++];
        }
        colsum.push_back(sum);
    }
    for(int i=0;i<m[0].size();i++){
        int l=0,sum=0;
        while(m.size()!=l){
            sum+=m[l++][i];
        }
        rowsum.push_back(sum);
    }
    for(auto i:colsum) cout<<i<<" ";
    cout<<endl;
    for(auto i:rowsum) cout<<i<<" ";
}

// {{1,1,0},{1,0,1}}
/*
[1,1,0]
[1,0,1]
*/