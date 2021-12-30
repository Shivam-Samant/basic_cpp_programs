// MONk 
// Ai-> candy in bag
// k-> second  -> har second me monk maximum bag ki candy khata hai or us bag me candy/2 ka greatest integer, candy add ho jati hai  
// 1 <= T <= 10   
// 1 <= N <= 10^5  
// 0 <= k <= 10^5   
// 0 <= Ai <= 10^10

// ex -> n=5,k=4 -> 2 1 7 4 2  -> max = 7
//            2 1 3 4 2  -> add = 7/2 ka greatest integer
//            2 1 3 2 2  -> max = 4 and add = 4/2
//            2 1 2 2 2  -> max = 3 and add = 3/2
//            2 1 1 2 2  -> max = 2 and add = 2/2     ans = 7+4+3+2=16

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        multiset<long long>bags;
        for(int i=0;i<n;i++){
            long long candy_ct;
            cin>>candy_ct;
            bags.insert(candy_ct); 
        }
        long long total_candies = 0;
        for(int i=0;i<k;++i){
            auto last_it = (--bags.end()); // or auto last_it = bags.end(); last_it--;
            long long candy_ct = *last_it;
            total_candies+=candy_ct;
            bags.erase(last_it);
            bags.insert(candy_ct/2);      
        } 
        cout<<total_candies<<endl;
    }
    return 0;
}