#include<bits/stdc++.h>
using namespace std;

vector<int> removeDuplicates(vector<int>& nums){

    int j =0;
    for(int i = 1; i< nums.size();i++){

        if(nums[j] != nums[i]){
            nums[j+1] = nums[i];
            j++;
        }

    }

    return nums;
}
int main(){

    vector<int> arr = {1,1,1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4,5,5,5,5};

    vector<int> res = removeDuplicates(arr);

    for(int i = 0 ; i< res.size(); i++){

        cout << res[i] << endl;
    }
}

/*
    REVISION 1 DONE
    https://leetcode.com/submissions/detail/2098100749/

    Intuition 
    This approach uses the analogy of organizing a bookshelf where books are already in alphabetical order
    To ensure each title appears only once without changing the order, you pick the first book and compare it to the next one
    If the next book is the same, you move on; if it is different, you place it immediately after the last unique book you kept


    Approach
    .Initialize two pointers: i starts at 0 (tracking the position of the last unique element) and j starts at 1 (iterating  through  the array)
    .Iterate: Use j to traverse from the second element to the end of the array
    .Compare: If the element at j is different from the element at i, a new unique element has been found
     This works because the array is sorted in non-decreasing order
    .Update: When a unique element is found, increment i and copy the element from j to this new position i
     Result: Once j completes its traversal, the first i + 1 elements are the unique elements of the array


    Complexity
    .Time Complexity: O(N), as it requires only a single traversal of the array
    .Space Complexity: O(1), because the transformation is done in-place without extra storage


    Corner Cases While not explicitly listed as a category in the sources, the approach implies:
    .Sorted Order: This specific method relies on the array being sorted in non-decreasing order to identify duplicates by   comparing     adjacent elements
   . Array Size: The logic handles arrays where all elements are unique or where all elements are duplicates by simply moving the pointers accordingly





*/