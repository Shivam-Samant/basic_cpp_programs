#include<bits/stdc++.h>

using namespace std;

// void primeSieve(int n){
//     int prime[100] = {0};
//     for(int i=2;i<=n;i++){  // 2 is first prime no.
//         if(prime[i]==0){
//             for(int j=i*i;j<=n;j+=i){
//                 prime[j]=1;
//             }
//         }
//     }

//     for(int i=2;i<=n;i++){
//         if(prime[i]==0){
//             cout<<i<<" ";
//         }
//     }
//     cout<<endl;
// }

// int main(){
//     int n;
//     cin>>n;
//     primeSieve(n);
//     return 0;
// }


// spf[i] smallest prime factor of i 
void primeFactor(int n){

    int spf[100]={0};
    for(int i=2;i<=n;i++){
        spf[i]=i;
    }
    for(int i=2;i<=n;i++){
        if(spf[i]==i){
            for(int j=i*i;j<=n;j+=2){
                if(spf[j]==j){
                    // cout<<spf[j]<<" ";
                    cout<<i<<" ";
                    spf[j]=i;
                }
            }
            cout<<endl;
        }
    }

    while(n!=1){
        cout<<spf[n]<<" ";
        n=n/spf[n];
    }
}

int main(){
    int n;
    cin>>n;
    primeFactor(n);
    return 0;
}








