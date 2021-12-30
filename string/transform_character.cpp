#include<bits/stdc++.h>
using namespace std;

int main(){
    string str="slfgshfsdhkg";
    
    // cout<<'a' - 'A'<<endl; // o/p: 32    // for check the difference   

    // Convert into upper case 

    for(int i=0;i<str.size();i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i]-=32;
        }
    }
    cout<<str<<endl;

    // convert into lower case 

    for(int i=0;i<str.size();i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i]+=32;
        }
    }
    cout<<str<<endl<<endl;

// TRANSFORM FUNCTION
    
    cout<< "Using Transform Function" << endl << endl;
    
    string s = "fakjsdhflak";

    transform(s.begin(), s.end(), s.begin(), ::toupper);

    cout << s << endl;

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    cout << s << endl;

    // string s = "shivam";
    // int i=0;
    // while(s[i]!='\0'){
    //     // s[i]-=32;
    //     s.at(i)-=32;
    //     i++;
    // }
    // cout<<s;

    return 0;
}