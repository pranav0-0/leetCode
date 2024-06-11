#include<iostream>
#include<vector>
#include<set>
using namespace std;

const static auto initialize = [] {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();
bool dfs(int r,int c,int i,string &word,set<pair<int const,int const>> visited,vector<vector<char>> &b){

    if(i==word.size()) return true;

    if(r>=b.size() || c>=b[0].size() || word[i]!=b[r][c] || visited.find({r,c})!=visited.end()){
        return false;
    }
    visited.insert({r,c});
    bool res = dfs(r,c+1,i+1,word,visited,b) ||
    dfs(r,c-1,i+1,word,visited,b) ||
    dfs(r+1,c,i+1,word,visited,b) ||
    dfs(r-1,c,i+1,word,visited,b);
    return res;
}

int main(){
    vector<vector<char>> b = {{'A','B','C','E'},{'S','F','E','S'},{'A','D','E','E'}};
    string word = "ABCESEEEFS";
    set<pair<int,int>>visited;
    bool found=false;
    for(int i=0;i<b.size();i++){
        for(int j=0;j<b[0].size();j++){
            if(dfs(i,j,0,word,visited,b)){
                found=true;
                break;
            }
        }
        if(found) break;
    }
    cout<<found;
}