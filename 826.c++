#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

const static auto initialize = [] {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();

int findNear(vector<int> &d,int w){
    int mid,l=0,r=d.size()-1;
    while(l<=r){
        mid = (l+r)/2;
        if(d[mid]<w){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    if(d[r]<w)
        return d[r];
    else return 0;
}

int main()
{
    vector<int> d={5,50,92,21,24,70,17,63,30,53},p={68,100,3,99,56,43,26,93,55,25},w={996,3,55,30,11,58,68,36,26,1};
    int maxp=0,tWork=0;
    map<int,int> m;
    m[0]=0;
    for(int i=0;i<d.size();i++){
        m[d[i]] = p[i];
    }

    cout<<"**********before max**********\n";
    for(auto i:m) cout<<i.first<<" "<<i.second<<endl;
    
    for(auto i:m){
        if(i.second>maxp){
            maxp=i.second;
        }
        m[i.first]=maxp;
    }

    cout<<"**********after max**********\n";
    for(auto i:m) cout<<i.first<<" "<<i.second<<endl;

    for(int i=0;i<w.size();i++){
        if(m.find(w[i])==m.end()){
            tWork += m[findNear(d,w[i])];
        }
        else{
            tWork+=m[w[i]];
        }
    }
    cout<<tWork;
}