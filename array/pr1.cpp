// Q. Given an array arr[]of size N the task is to find the first repeating element in the array of integers, i.e.,
// an element that occurs more than once and whose index of first occurence is smallest
// Constraints ->  1<=N<=10^6;    0<=Ai<=10^6;

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }    
    const int N = 1e6+2;
    int idx[N];
    for(int i=0;i<N;i++){
        idx[i]=-1;
    }
    int minidx = INT_MAX;

    for(int i=0;i<N;i++){
        if(idx[a[i]]-1){
            minidx = min(minidx,idx[a[i]]);
        }
        else{
            idx[a[i]]=i;
        }
    }

    if(minidx==INT_MAX){
        cout<<"-1"<<endl;
    }
    else{
        cout<<minidx+1<<endl;
    }

    return 0;
}