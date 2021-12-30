#include<iostream>

using namespace std;

int main(){
    string text = "some text";
    text.resize(5,'!'); // start from 1
    cout << text;
    return 0;
}