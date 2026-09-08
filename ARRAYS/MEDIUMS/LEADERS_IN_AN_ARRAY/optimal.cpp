#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int> findLeader(vector<int>& nums){

        vector<int> ans;
        int n = nums.size();
        int max = nums[n-1];
        ans.push_back(nums[n-1]);

        for(int i = n-2;i>=0;i--){

            if(nums[i] > max){
                ans.push_back(nums[i]);
            }

        }
        return ans;
    }
};

int main(){

    vector<int> arr = {1, 2, 5, 3, 1, 2};
    
    Solution sol;
    vector<int> op = sol.findLeader(arr);

    for(auto it:op){
        cout<<it<<endl;
    }

}