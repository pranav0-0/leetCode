#include<iostream>
#include<map>
#include<vector>

using namespace std;

int main(){
    vector<int> nums={0,1,2,2,4,4,1};
    map<int,int> f;
    int m=-1,res=-1;
    for(auto i:nums){
        f[i]++;
        if(i%2==0 && f[i]>=m){
            if(f[i]==m && res!=-1){
                res=min(i,res);
            }
            else{
                res=i;
            }
            m=f[i];
        }
    }
    for(auto i:f) cout<<i.first<<":"<<i.second<<"\n";
    cout<<endl<<res;
}