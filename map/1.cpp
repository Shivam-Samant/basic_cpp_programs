// map store unique things in sorted way.
// insert or access karne ki time complexity -> o(log(n)) where n-> current size of map
// map<string,string>m; m["abcd"]="abcd"; // T.C. -> s.size()*log(n); // depends on key(string) also
#include<bits/stdc++.h>

using namespace std;

int main(){
    map<int,string>m;
    m[1]="abc";
    m[2]="cdc";
    m[3]="acd";
    //or
    m.insert({4,"afg"});
    // iterator
    // map<int,string>::iterator it;
    // for(it=m.begin();it!=m.end();++it){
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }

    // auto keyword
    for(auto pr:m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }

    // m.find(3)->return iterator of value 3; -> T.C. ->O(log(n))
    // auto it=m.find(3); 
    // if(it==m.end()) cout<<"No Value";
    // else cout<<it->first<<" "<<it->second<<endl;

    //m.earse() -> It's used with key and iterator -> O(log(n))
    // auto it = m.find(2);
    // m.erase(it); // erase 2
    // if(it!=m.end()) m.erase(it);  // erase all
    // cout<<"After erase: ";
    // for(auto pr:m){
    //      cout<<pr.first<<" "<<pr.second<<endl;
    // }

    // m.clear(); // -> clear all values;
    // cout<<"After clear: ";
    // for(auto pr:m){
    //     cout<<pr.first<<" "<<pr.second<<endl;
    // }
    return 0;
}
// MULTIMAP

// -> store duplicate value 
// multimap<pair<int,int>,string>m;