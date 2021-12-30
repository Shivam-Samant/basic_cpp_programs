#include<bits/stdc++.h>

using namespace std;

void printVec(vector <pair<int ,int>> &v){
    cout<<"size: "<<v.size()<<" "<<endl;
    for(auto pr : v){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}

int main(){
    pair<int,string>p;
    p = make_pair(2,"abc"); //or p={2,"abc"};
    cout<<p.first<<" "<<p.second<<endl;
    
    // pair as an array
    pair<int,int>p_array[3];
    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};
    // swap function
    swap(p_array[0],p_array[2]);
    for(int i=0;i<3;++i){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }

    // taking input from user 
    // pair<int,string>p;
    // cin>>p.first;
    // cin>>p.second;

    vector <pair<int,int>> v = {{1,2},{2,3},{4,5}};
    printVec(v);

    return 0;
}