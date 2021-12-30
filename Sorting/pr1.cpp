// rupay = 15;
// 1 choclate = 1 rupay;
// 3 wrapper = 1 choclate;
// find total choclate?

// 15 rupay -> 15 choclate;
// 15 choclate -> 15 wrapper;
// 15 wrapper -> 5 choclate;
// 5 choclate -> 5 wrapper;
// 5 wrapper -> 1 choclate + 2 wrapper;
// 1 choclate -> 1 wrapper;
// 1 wrapper + 2 wrapper -> 1 choclate;
// 1 choclate -> 1 wrapper;


// ans = 15 + 5 + 1 + 1 = 22;

#include<iostream>

using namespace std;

int main(){
    int money=15;
    int choc_price = 1;
    int choc=0,wrap=0,total_choc;
    for(int i=money;i>0;i--){
        // if(money>choc_price){
        //     total_choc = choc++;
        //     }
        choc = money;
        for(int j=money;j>=0;j--){
            wrap = choc;
            wrap = choc/3;
            choc += wrap;
        }
        total_choc = choc;
    }
        // int ans = wrap + choc;
        // cout<<ans;
        cout<<total_choc;
    
    return 0;
}