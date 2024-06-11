#include<iostream>
#include<stack>
using namespace std;

int main(){
    string s="abBAcC";
    stack<char> stk;
    for(int i=s.size()-1;i>-1;i--){
        if(islower(s[i])){
            if(!stk.empty() && stk.top()==toupper(s[i])){
                stk.pop();
            }
            else{
                stk.push(s[i]);
            }
        }
        else{
            if(!stk.empty() && stk.top()==tolower(s[i])){
                stk.pop();
            }
            else{
                stk.push(s[i]);
            }
        }
    }
    string ans;
    while(!stk.empty()){
        ans.push_back(stk.top());
        stk.pop();
    }
    cout<<ans;
}