#include<bits/stdc++.h>

using namespace std;

int main(){
    string text;
    char letter;
    for(int i=0;i<5;i++){
        cout<<"LETTER: ";
        cin>> letter;
        text+=letter;
    }
    cout<<"TEXT: "<<endl;
    cout<<text<<endl;
    return 0;
}