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

int main(){
    vector<int> nums = {0,0,0,1,0,1,1,1,0};
    unordered_map<int,int> m;
    int count=0,maxc=0,c=0;
    m[0]=-1;
    for(int i=0;i<nums.size();++i){
        if(nums[i]==0) count--;
        else count++;
        if(m.find(count)!=m.end()){
            c = i - m[count];
            maxc = max(c,maxc);
        }
        else{
            m[count]=i;
        }
    }
    cout<<maxc;
}

/*
0
 0  0  0  1  1  1
-1 -2 -3 -2 -1  0
*/