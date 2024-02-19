class Solution {
public:
    string maximumNumber(string num, vector<int>& change) {
        string c,sol;
        bool vargin = true,stayin=false;
        for(int i=0;i<change.size();i++){
            c.push_back(change[i]+'0');
        }
        for(int i=0;i<num.size();i++)
        {
            if(num[i]<c[num[i]-'0'] && (vargin==true || stayin==true)){
                vargin=false;
                stayin=true;
                sol.push_back(c[(num[i]-'0')]);
            }
            else{
                sol.push_back(num[i]);
                if(num[i]!=c[(num[i]-'0')])
                stayin=false;
            }
        }
        return sol;
    }
};