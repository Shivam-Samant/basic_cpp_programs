#include<Bits/stdc++.h>

using namespace std;
//maxconsecutive subarray with k zeros
int main(){
    int arr[]={1,1,0,0,0,1,1,1,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k;
    cin>>k;
    int start=0;
    int end=0;
    int maxconsecutive=0;
    int zerocount=0;
    for(end=0;end<n;end++){
        if(arr[end]==0){
            zerocount++;
        }
        while(zerocount>k){
            if(arr[start]==0){
                zerocount--;
            }
            start++;
        }
        maxconsecutive=max(maxconsecutive,end-start+1);
    }
    cout<<maxconsecutive;
    return 0;
}