#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
        int findMajority(vector<int>& nums){

    int n = nums.size();
    int count =0;
    for(int i = 0;i<=nums.size();i++){
        for(int j =i+1;j<=nums.size();j++){

            if(nums[i] == nums[j]){
                count++;
            }
        }
        if(count>(n/2)){
            return nums[i];
        }
    }
    return -1;
    
}
};

int main(){

    vector<int> arr = {1,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,4,4,4};

    Solution sol;
    int major  = sol.findMajority(arr);

    cout<< major;
}