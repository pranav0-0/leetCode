#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

const static auto initialize = [] {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();

int main(){
    vector<string> msg={"tP x M VC h lmD","D X XF w V","sh m Pgl","pN pa","C SL m G Pn v","K z UL B W ee","Yf yo n V U Za f np","j J sk f qr e v t","L Q cJ c J Z jp E","Be a aO","nI c Gb k Y C QS N","Yi Bts","gp No g s VR","py A S sNf","ZS H Bi De dj dsh","ep MA KI Q Ou"},
                   sndr={"OXlq","IFGaW","XQPeWJRszU","Gb","HArIr","Gb","FnZd","FnZd","HArIr","OXlq","IFGaW","XQPeWJRszU","EMoUs","Gb","EMoUs","EMoUs"};
    
    int maxw=0;
    string maxs;
    unordered_map<string,int> map;
    int size=msg.size();
    int fre[size];

    for(int i=0;i<msg.size();i++){
        fre[i]=1;
        for(int j=0;j<msg[i].size();j++){
            if(msg[i][j]==' '){
                fre[i]++;
            }
        }
    }

    for(auto i:fre) cout<<i<<' ';
    for(int i=0;i<msg.size();i++){
        // if(map.find(sndr[i])==map.end())
        //     map[sndr[i]]=0;
        map[sndr[i]]+=fre[i];
    }

    for(auto i:map) cout<<i.first<<'='<<i.second<<endl;
    for (const auto& i : map) {
        if (i.second > maxw || (i.second == maxw && i.first > maxs)) {
            maxw = i.second;
            maxs = i.first;
        }
    }
    cout<<endl<<maxs;
}