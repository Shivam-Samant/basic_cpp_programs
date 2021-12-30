// #include<bits/stdc++.h>

// using namespace std;

// int divisible(int n,int a,int b){
//     int c1 = n/a;
//     int c2 = n/b;
//     int c3 = n/(a*b);


//     return c1+c2-c3;
// }

// int main(){
//     int n,a,b;
//     cin>>n>>a>>b;
//     cout<<divisible(n,a,b)<<endl;
//     return 0;
// }


// Euclid algorithm to find GCD -> Greatest common divisor ->(HCF)
#include<bits/stdc++.h>

using namespace std;

int gcd(int a,int b){
    while(b!=0){
        int rem=a%b;
        a=b;b=rem;
    }
    return a;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    return 0;
}