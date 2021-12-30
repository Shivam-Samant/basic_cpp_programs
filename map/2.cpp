// Unordered map
// map me comparison ke basis par order sort hota hai
// or unordered_map me key ki hash value ke acc. ordering hoti hai
// average T.C. for unordered map -> O(1);
// pair ka inbuilt hash function define nahi hota hai isiliye unordered_map hum use nahi kar sakte hai 
// lekin map comparison ke basis par insertion karta hai isiliye hum pair ko map ke sath use kar sakte hai
// ex - unordered_map<pair<int,int>>m; o/p -> compilation error
//      map<pair<int,int>>m;    o/p -> compiled without error


#include<bits/stdc++.h>

using namespace std;

int main(){
    unordered_map<int,string>m;
    m[1]="abc";
    m[2]="cdc";
    m[3]="acd";
    for(auto value : m){
        cout<<value.first<<" "<<value.second<<endl;
    }
    return 0;
}

