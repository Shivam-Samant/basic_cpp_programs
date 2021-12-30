#include<bits/stdc++.h>

using namespace std;

int main(){
    string words = "zero two three";
    string word = "one";

    // int found = words.find(" ");
    // words = words.substr(0,found) + " " + word + " " + words.substr(found);

    int found = -1,lastSpace = 0;
    do{
        found = words.find(" ",found+1);
        if(found!=-1){
            lastSpace = found;
        }        
    }while(found!=-1);

    words = words.substr(0,lastSpace) + " " +word + " " + words.substr(lastSpace);
    cout<<words;
    return 0;
}