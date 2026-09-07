#include<bits/stdc++.h>
using namespace std;


vector<int> unionOfArrays(vector<int>& nums1, vector<int>& nums2){

    set<int> st;

    for(int i =0; i< nums1.size();i++){
        st.insert(nums1[i]);
    }

     for(int j =0; j< nums2.size();j++){
        st.insert(nums2[j]);
    }

    vector<int> un;
    int i =0;
    for(auto it: st){

        un.push_back(it);  // I CANT USE un[i++] because it is empty use it only when elements are already present in it

    }
    return un;

}


int main(){

    vector<int> arr1 = {1, 3, 5, 7, 9, 11, 13};
    vector<int> arr2 = {2, 4, 6, 8, 10, 12, 14};

    vector<int> res = unionOfArrays(arr1,arr2);

    for( int it : res){
        cout<< (it)<< endl;
    }
}

/*
    Intuition
    The union of two arrays consists of all the unique elements from both arrays combined
    A set data structure is ideal for this task because it inherently prevents duplicate entries
    To ensure that the elements are kept in a specific order (typically sorted order in libraries like C++ std::set), an ordered set should be used

    Approach
    .Declare a set s to handle the storage of unique elements and a vector or list (often called Union) to store the  final result
    .Iterate through both input arrays (nums1 and nums2), inserting every element into the set
    .Because the set only stores unique values, duplicates are automatically filtered out
    .Iterate through the set and copy its elements into the final result vector
    .Return the final vector containing the union

    Complexity Analysis
    Time Complexity: O((M+N)log(M+N))
    .In the worst-case scenario where there are no common elements and all elements in both arrays are distinct, the set will store M+N elements
    .Since inserting an element into an ordered set takes logarithmic time relative to its size, the total time across all insertions approximates to O((M+N)log(M+N))

    Space Complexity: O(M+N)
    .This accounts for the space required to store the elements in the union array and the set


    Corner Cases
    .The sources highlight two specific scenarios that the logic must handle:
     No Common Elements: When nums1 and nums2 are entirely distinct, the set reaches its maximum possible size of M+N
    .Duplicate/Common Elements: When there are overlapping values between the two arrays (like 2, 3, 4, 5 in the dry  run),   the set's property of not holding duplicates ensures each value only appears once in the final result

*/