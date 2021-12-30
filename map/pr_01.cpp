// Q. Given N strings, print unique strings in lexicographical order with their frequency
// N <= 10^5
// |S| <= 100
// if |S| <= 10000 or more then map method is not more beneficial to solve this problem
// because in string case T.C. -> s.size()*log(n)

#include<bits/stdc++.h>

using namespace std;

int main(){
    map<string,int>m;
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        string s;
        cin>>s;
        // m[s]= m[s]+1;
        // or
        m[s]++;
    }
    for(auto pr: m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    return 0;
}