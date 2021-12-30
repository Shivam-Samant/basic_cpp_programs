#include<bits/stdc++.h>

using namespace std;

void printVec(vector <pair<int ,int>> &v){
    cout<<"size: "<<v.size()<<" "<<endl;
    for(auto pr : v){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    printVec(v);

    return 0;
}