#include <bits/stdc++.h>
using namespace std;


vector<int> duplicateRemove(vector<int>& nums){


    set<int> st;

    for(int i = 0 ; i< nums.size();i++){

        st.insert(nums[i]);

    }

    int i = 0;
    for (auto it : st) {
        nums[i++] = it;
    }
    return nums;
}
int main(){

    vector<int> arr = {1,1,1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4,5,5,5,5};

    vector<int> res = duplicateRemove(arr);

    for(int i = 0;i<arr.size();i++){

        cout<< res[i] << endl;
    }

}

