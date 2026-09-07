#include<bits/stdc++.h>
using namespace std;


vector<int> in(vector<int>& nums1, vector<int>& nums2){

    vector<int> inter;
    int visr;
    if(nums1.size() < nums2.size()){
        visr = nums1.size();
    }
    else{
        visr = nums2.size();
    }
    
    
    vector<int> vis(visr,0);

    for(int i =0; i< nums1.size();i++){
        for(int j = 0; j<nums2.size();j++){
            if(nums1[i] == nums2[j] && vis[j] ==0){
                
            }
        }
    }
    return inter;
}
int main(){

    vector<int> a = {1, 1, 2, 2, 2, 3, 4};
    vector<int> b = {1, 2, 2, 4, 4, 5};

    vector<int> res = in(a,b);

    for(int i = 0; i< res.size();i++){

        cout << res[i] << endl; 
    }
}