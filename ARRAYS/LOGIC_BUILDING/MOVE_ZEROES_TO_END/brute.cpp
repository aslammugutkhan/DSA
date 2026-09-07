#include <bits/stdc++.h>
using namespace std;

vector<int> moveZeroes(vector<int> &nums){

    int n = nums.size();
    vector<int> temp;

    for(int i =0; i<n;i++){
        if(nums[i] != 0){
            temp.push_back(nums[i]);
        }
    }

    int temp_size = temp.size();

    for(int i =0; i< temp_size;i++){
        nums[i] = temp[i];
    }

    for(int i = temp_size; i<n;i++){
        nums[i] = 0;
    }

    return nums;

}

int main(){

    vector<int> arr = {1,2,3,0,5,4,3,0,7,0,0,7};
    vector<int> fin = moveZeroes(arr);

    for(int i = 0; i<arr.size();i++){

        cout<< arr.at(i) << endl;
    }

}

/*
REVISION 1 DONE
Intuition: The core idea is to temporarily separate non-zero numbers from the zeros and then reconstruct the array by placing the non-zero numbers at the front


Approach:
.Declare a temporary array to store the non-zero elements
.Traverse the original array and copy every non-zero element encountered into the temporary array
.Overwrite the beginning of the original array with the elements stored in the temporary array
.Fill the remaining empty positions in the original array with zeros


Complexity:
.Time Complexity: O(2N) or simply O(N)
    This involves O(N) to find non-zeros, O(X) to copy them back, and O(N−X) to fill zeros, where X is the count of non-zeros
.Space Complexity: O(N) because a temporary array is used, which in the worst case (no zeros) will be the same size as the       original array


Corner Cases: (Note: These are not explicitly detailed in the sources but are inferred from the logic).
.All zeros: The temp array will remain empty, and the final loop will fill the entire original array with zeros.
.No zeros: The temp array will be a full copy of the original, and no extra zeros will be added.

*/