#include <bits/stdc++.h>
using namespace std;

vector<int> moveZeroes(vector<int>& nums){

    int n = nums.size();
    int j = -100000;



    for(int i = 0; i<n; i++){
        if(nums[i] == 0){
            j = i;
            break;
        }
    }
if( j == -100000)
    return nums;
    for(int i = j+1; i<n;i++){

        if(nums[i]!=0){
            swap(nums[i],nums[j]);
            j++;

        }
        
    }

    
    return nums;
    
}

int main(){

    vector<int> arr = { 1,2,3,5,0,0,0,0,6,4,5,0};

    vector<int> res = moveZeroes(arr);

    for(int i = 0; i<res.size();i++){

        cout << res[i] << endl;
    }
}

/*

    REVISION 1 DONE
    https://leetcode.com/submissions/detail/2098053081/
    Intuition
    The intuition behind this strategy can be compared to two workers on a conveyor belt containing empty boxes (zeros) and boxes with items (non-zeros)

    Approach
    .Initialize two pointers: i and j
    .Set j = 0 to track the index where the next non-zero element should be placed
    .Traverse the array with pointer i from index 0 to n−1
    .If nums[i] is non-zero: Swap the elements at i and j, then increment j by 1
    .If nums[i] is zero: Simply move i forward without changing anything
    .By the end of the traversal, all non-zero elements will be at the front in their original relative order, and zeros will be at the end

    Complexity Analysis
    .Time Complexity: O(N), where N is the size of the array, because we traverse the array exactly once
    .Space Complexity: O(1), as the operation is done in-place without using extra space


    Corner Cases
    .While not explicitly listed as a category in the sources, the provided logic accounts for these scenarios:
    .Array with no zeros: Every element is swapped with itself (at i=j), maintaining the original array
    .Array with all zeros: The if (nums[i] != 0) condition is never met, so no swaps occur, leaving the array unchanged
    .Single element array: Works correctly whether the element is zero or non-zero
    .Already sorted (non-zeros followed by zeros): The non-zeros will swap with their own positions, and the zeros will remain at the end




*/