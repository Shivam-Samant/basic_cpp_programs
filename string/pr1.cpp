// Form the biggest number from the numeric string

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s = "12345134165431";

    // sort(s.begin(),s.end(),greater<int>());
    sort(s.begin(),s.end(),greater<char>());

    cout << s << endl;
    
    return 0;
}

