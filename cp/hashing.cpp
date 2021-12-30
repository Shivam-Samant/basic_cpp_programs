// input->
// 6
// 3 5 5 7 7 8
// 5
// 3
// 7
// 5
// 8
// 9
// output ->
// 1
// 2
// 2
// 1
// 0

#include<bits/stdc++.h>

using namespace std;

const int N = 1e7+10;
int hsh[N];

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
        hsh[a[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        cout<<hsh[x]<<endl;
    }
    return 0;
}