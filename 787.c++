#include<bits/stdc++.h>
using namespace std;
void bfs(vector<vector<int>> flights,int src,int des,int k,int n){
    vector<bool> visited(n,false);
    queue<pair<int,int>> q;
    q.push({src,0});
    visited[src]=true;
    
}
int main(){
    int src,des,k;
    vector<vector<int>> flights={{0,1,100},{1,2,100},{2,0,100},{1,3,600},{2,3,200}};
    int n=4;
    bfs(flights,src,des,k,n);
}