#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int pascalTriangle(int a, int b){
            return ncr(a,b);
        }

    private:
        int ncr(int p, int q){

            int res =1;
            int n = p-1;
            int r = q-1;

            if(r > n-r){
                r = n-r;
            }

            if(r == 1) return n;
            
            for(int i =0; i<r;i++){
                res = res*(n-i);
                res = res/(i+1);
            }
            return res;
        }
};
int main(){
    int n =5;
    int r =3;

    Solution sol;

    int a = sol.pascalTriangle(n,r);

    cout<< "The rth row and nth column answer is: "<< a << endl;

}