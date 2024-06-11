#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>
#include<set>
using namespace std;

const static auto initialize = [] {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();

int main(){
    vector<int> arr1={2,3,1,3,2,4,6,19,9,2,7},arr2={2,1,4,3,9,6},ans,rem;
    unordered_map<int,int> freq;
    unordered_set<int>ar2;

    for(int i=0;i<arr1.size();i++){
        freq[arr1[i]]++;
    }

    for(int i=0;i<arr2.size();i++){
        while(freq[arr2[i]]!=0){
            ans.push_back(arr2[i]);
            freq[arr2[i]]--;
        }
    }
    for(auto i:freq){
        while(i.second!=0){
            rem.push_back(i.first);
            i.second--;
        }
    }
    sort(rem.begin(),rem.end());
    for(auto i:rem) ans.push_back(i);
    for(auto i:ans) cout<<i<<" ";
}