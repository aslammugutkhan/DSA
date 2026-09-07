#include<bits/stdc++.h>
using namespace std;

vector<int> unionSorted(vector<int>& nums1, vector<int>& nums2){

    vector<int> un;
    int i =0;
    int j =0;
    while (i < nums1.size() && j < nums2.size())
    {
        if(nums1[i] < nums2[j]){
            if(un.size() == 0 || un .back() != nums1[i]){
                un.push_back(nums1[i]);
            }
            i++;
        }
        else{
            if(un.size() == 0 || un.back()!= nums2[j]){
                un.push_back(nums2[j]);
            }
            j++;
        }
    }

    while (j < nums2.size()){ 
            if (un.back() != nums2[j])
                un.push_back(nums2[j]);
            j++;
        }

        while (i < nums1.size()){ 
            if (un.back() != nums1[i])
                un.push_back(nums1[i]);
            i++;
        }
    

    return un;
}

int main(){

    vector<int> arr1 = {1, 3, 5, 7, 9, 11, 13};
    vector<int> arr2 = {2, 4, 6, 8, 10, 12, 14};

    vector<int> res = unionSorted(arr1,arr2);

    for(int i = 0; i<res.size();i++){

        cout<< res[i] << endl;
    }
}