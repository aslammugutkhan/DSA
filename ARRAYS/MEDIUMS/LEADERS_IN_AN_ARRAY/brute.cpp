#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:

        vector<int> findLeaders(vector<int>& nums){

            vector<int> l;
            int n = nums.size();
            bool flag;
            for(int i=0;i<n;i++){
                flag = true;
                for(int j=i+1;j<n;j++){
                    if(nums[i] < nums[j]){
                        flag = false;
                    }
                }
                
                if(flag){
                    l.push_back(nums[i]);
                }

                
            }
           return l;
        }
};

int main(){

    vector<int> arr = {1, 2, 5, 3, 1, 2};

    Solution sol;

    vector<int> op =sol.findLeaders(arr);

    for(auto it : op){
        cout<< it << endl;
    }
}