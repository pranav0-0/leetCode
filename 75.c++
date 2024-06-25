#include<iostream>
#include<vector>

using namespace std;

/*
    0,0,2,1,1,2
    -,l,-,-,-,r
*/

int main()
{
    vector<int> nums={0};
    int l=0,r=1,n=nums.size();
    while(r!=n){
        if(nums[l]==0){
            l++;
            if(l==r)
                r++;
        }

        if(nums[r]==0){
            int temp=nums[l];
            nums[l]=0;
            nums[r]=temp;
        }
        r++;
    }
    if(nums[l]==0)
        l++;
    r=l+1;
    while(r!=n){
        if(nums[l]==1){
            l++;
            if(l==r)
                r++;
            continue;
        }

        if(nums[r]==1){
            int temp=nums[l];
            nums[l]=1;
            nums[r]=temp;
        }
        r++;
    }
    for(auto i:nums) cout<<i<<",";
}

/*
    0,0,2,1,1,2
    -,-,l,r,-,-
*/
