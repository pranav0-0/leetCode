#include<iostream>
// #include<bits/stdc++.h>
#include<unordered_map>
#include<vector>
using namespace std;

const static auto initialize = [] {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();

int main()
{
    unordered_map<int,int> freq;
    vector<int> nums={1,11};
    int k=2;
    int l=0,r=0,result=1;
    for(r;r<nums.size();r++){
        if(freq.find(nums[r])==freq.end()){
            freq[nums[r]]=1;
        }
        else{
            freq[nums[r]]++;
            if(freq[nums[r]]>k){
                while(freq[nums[r]]>k){
                    freq[nums[l]]--;
                    l++;
                }
            }
        }
        result = max(result,r-l+1);
    }
    cout<<result;
}