#include<iostream>

using namespace std;

string remove(string s){
    string ns;
    for(int i=0;i<s.size();i++){
        // if(s.at(i)!='a'){
        
        // if(s.at(i)!='a'&&s.at(i)!='b')
        //but if there are 20 char change then it's not easy to do 19 &&; 
        
        // then we can do 
        if(s.at(i)>='0'&&s.at(i)<='9')
        {
            ns+=s.at(i); 
            }
    }
    return ns;
}

int main(){
    string inputText;
    cout<<"Enter text: ";
    getline(cin, inputText);
    string ns = remove(inputText);
    cout<<"New string is: "<<ns;
    return 0;
}