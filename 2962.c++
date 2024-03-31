#include<iostream>
#include<unordered_map>
#include<map>
#include<algorithm>
#include<vector>

using namespace std;

const static auto initialize = [] {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();

int main(){
    string s = "is2 sentence4 This1 a3",word,result;
    map<int,string> sorted;
    vector<string> ss;
    for(int i=0;i<s.size()+1;i++){
        if(s[i]==' ' || i==s.size()){
            ss.push_back(word);
            word.clear();
        }
        else{
            word.push_back(s[i]);
        }
    }
    for(int i=0;i<ss.size();i++){
        cout<<ss[i][ss[i].size()-1]<<",";
        sorted[ss[i][ss[i].size()-1]]=ss[i].substr(0,ss[i].size()-1);
    }
    cout<<"result=\n";
    for(auto i:sorted){
        result.append(i.second);
        result.append(" ");
    }
    cout<<result.pop_back();
}