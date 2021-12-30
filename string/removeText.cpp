#include<bits/stdc++.h>

using namespace std;

int main(){
    string text = "These um are my um words and I want um to stop um talking like um this.";
    string target = "um";
    int found = -1;
    do{
        found = text.find(target,found+1);
        if(found!=-1){
        text = text.substr(0,found)+text.substr(found+target.length());
        }
    }while(found!=-1);
    cout<<text;

    return 0;
}