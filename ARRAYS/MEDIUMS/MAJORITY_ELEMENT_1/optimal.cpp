#include<bits/stdc++.h>
using namespace std;
class  Solution{
    public:

    int majorityElement(vector<int>& nums){

        int count =0;
        int el;
        for(int i =0; i<nums.size();i++){
            if(count == 0){
                count++;
                el = nums[i];
            }
            if(nums[i] == el){
                count++;
            }
            else{
                count--;
            }
        }

        int count1 =0;
        for(int j =0;j<nums.size();j++){
            if(nums[j] == el){
                count1++;
            }
        }

        if(count1>nums.size()/2){
            return el;
        }
        return -1;
    }
    
};

int main(){

    vector<int> arr = {2,2,1,1,1,2,2};

    Solution sol;

    int major =sol.majorityElement(arr);
    cout<< major << endl;

}