#include<iostream>
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
    vector<int> b={1,10,3,10,2};
    int m=3,k=1,min=INT8_MAX,max=INT8_MIN;

    if( m*k < b.size() ){   //base condition
        return -1;
    }

    for(int i=0;i<b.size();i++){
        if(b[i]>max) max=b[i];  // finds max
        if(b[i]<min) min=b[i];  // finds min
    }

    int l=min,r=max,mid;
    while(l<r){
        mid=(l+r)/2;
        
    }
}
