#include<iostream>

using namespace std;

int main(){
    string s = "some text";
    s.at(1) ='a';  // starts from 0 
    cout<<s<<endl;
    cout<<int(s.at(1)-96+s.at(5)-96); // a = 1,  t = 20 -> 1 + 20 = 21;
    
    return 0;
}