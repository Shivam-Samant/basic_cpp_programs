// Write a function to add 2 integers
#include<iostream>

using namespace std;
int add(int n1,int n2){
    int sum = n1+n2;
    return sum;
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    cout<<add(n1,n2)<<endl;
       return 0;
}