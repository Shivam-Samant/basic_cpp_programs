#include<iostream>

using namespace std;
int main(){
    int n;
    unsigned long long factorial{1}; // unsigned: which not includes any negative value.

    cout << "Enter the number: ";
    cin >> n;
    if(n<0){
        cout<<"Can't find factorial for negative numbers"<<endl;
    }
    else if (n<2){
        cout<<n<<"! = "<<factorial; 
        }
    else{
        for(int num{n};(num>=2);num--){
            factorial=factorial*num;
        }
         cout<<n<<"! = "<<factorial; 
    }
    return 0;
}