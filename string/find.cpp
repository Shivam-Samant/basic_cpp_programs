#include<iostream>

using namespace std;

int main(){
    string s = "abc abc abc abc";
    // int found=-1; 
    // do{
    // // if searching is out of range it's means -1 in find function
    // found = s.find("abc",found+1);  // starts from 0
    // if(found!=-1)
    // cout<<"Found at index: "<<found<<endl;
    // }while(found!=-1); 
    

    int found = s.find_first_of("cba"); // it's find any of character in an word
    cout<<found;
    return 0;
}