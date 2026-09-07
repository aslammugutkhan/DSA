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

/*
    REVISION 1 DONE
    Intuition 
    The intuitive way to handle duplicates is to use a data structure specifically designed to store only unique elements, such as a HashSetBy passing all array elements through a set, duplicates are automatically filtered out


    Approach
    .Declare a HashSet: Create a set to store the elements
    .Traverse and Insert: Iterate through the original array and put every element into the HashSet
    .Count: Store the size of the set in a variable K
    .Repopulate Array: Copy all elements from the HashSet back into the beginning of the original array
    .Return: Finally, return K as the count of unique elements


    Complexity
    .Time Complexity: O(N * log N) + O(N)
     The O(N * log N) accounts for the set operations (likely referring to a tree-based set implementation), and O(N) is for the array   traversal

    .Space Complexity: O(N), because in the worst-case scenario where all elements are unique, the HashSet must store every   element from the array


    Corner Cases
    .Uniqueness: This method is robust even if the array is not sorted, as a HashSet does not require order to identify duplicates

    .Large Inputs: The O(N) space complexity makes this less efficient for memory-constrained environments compared to the two-pointer method

*/