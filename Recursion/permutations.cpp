#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class solution {
    void solve(vector<int>& ds,vector<int>& ans,vector<int>& freq,vector<int>& nums){
        if(ds.size() == nums.size()){
            ans.push_back();
            return;
        }

        for(int i = 0 ; i < nums.size() ; i ++)[
            if(!freq[i]){
                ds.push_back(nums[i]);
                freq[i] = 1;
                solve(ds,ans,freq,nums);
                freq[i] = 0;
                ds.pop_back();
            }
        ]
    }
}

vector<vector<int>> permute(vector<int>& nums){
        vector<vector<int>> ans;
        vector<int> ds;
        vector<int> freq(nums.size(),0);
        solve(ds,ans,freq,nums);
        return ans;
    }

int main(){

    vector<int> nums = {1,2,3};
    vector<vector<int>> result = permute(nums);

    cout<<"All permutations "<<endl;
    for(auto &perm : result){
        for(int x : perm) cout<<x<<" ";
        cout<<endl;
    }

    
    
    return 0;
}