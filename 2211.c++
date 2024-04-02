#include<iostream>
#include<stack>
// #include<vector>
using namespace std;

const static auto initialize = [] {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();

int main(){
    string dir="RLRSLL";
    int collide=0;
    stack<char> s;
    int i=0;
    while(dir[i]=='L'){
        i++;
    }
    s.push(dir[i]);
    for(i=i+1;i<dir.size()+1;i++){
        if(!s.empty() && dir[i]=='L' && s.top()=='R'){
            s.pop();
            collide+=2;
            while(!s.empty() && s.top()=='R'){
                s.pop();
                collide++;
                if(s.empty()) break;
            }
            s.push('S');
        }
        // else if(!s.empty() && dir[i]=='L' && s.top()=='L'){
        //     s.push('L');
        // }
        else if(!s.empty() && dir[i]=='L' && s.top()=='S'){
            collide++;
        }
        else if(!s.empty() && dir[i]=='S' && s.top()=='R'){
            while(!s.empty() && s.top()=='R'){
                s.pop();
                collide++;
                if(s.empty()) break;
            }
            s.push('S');
        }
        else if(!s.empty() && dir[i]=='R' && s.top()=='S'){
            s.push('R');
        }
        else if(!s.empty() && dir[i]=='R' && s.top()=='R'){
            s.push('R');
        }
        else if(s.empty()){
            s.push(dir[i]);
        }
    }
    cout<<collide;
}

/*
R
R L
S

car moving from R will colide with car moving to L  ( > < = S S ) 

car moving from R will colide with car moving to S  ( > S = S S )

car moving from S will colide with car moving to L  ( S < = S S )
- - - - - - 0
>

- - - - - - 1
> < 

- - - - - - 2
S S >

- - - - - - 3
S S > S

- - - - - - 4
S S S S <

- - - - - - 5
S S S S S <

- - - - - - 6
S S S S S S
*/