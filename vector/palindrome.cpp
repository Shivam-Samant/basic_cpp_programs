#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int a[x];
    for(int i=0;i<x;i++){
        cin>>a[i];
    }
    int count = 0;
    for(int i=0;i<x/2;i++){    
        if(a[i]==a[x-i-1]){
            count++;
        }
    }
    if(count==x/2) cout<<"True";  
    else cout<<"False";
}  