// Given array a of N integers. Given Q queries and in each query given L and R print sum of array elements from index L to R(L,R included)
// constraints
// 1 <= N <= 10^5
// 1 <= a[i] <= 10^9
// 1 <= Q <= 10^5
// 1 <= L, R <= N

// input ->
// 6
// 3 6 2 8 9 2
// 4
// 2 3
// 4 6
// 1 5
// 3 6
// output ->
// 8
// 19
// 28
// 21


#include<bits/stdc++.h>

using namespace std;

const int N = 1e5+10;
int a[N];
int pf[N];

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        pf[i]=pf[i-1] + a[i];  //1 idx is preferable for prefix sum(bcz in this case can't need if else condition)
    }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        // long long sum = 0;
        // for(int i = l; i <= r; ++i){
        //     sum+=a[i];
        // }
        // cout<<sum<<endl;

        cout<<pf[r]-pf[l-1]<<endl;
    }
    return 0;
}