#include<bits/stdc++.h>

using namespace std;

void printVec(vector <int> &v){
    cout<<"size: "<<v.size()<<" capacity: "<<v.capacity()<<endl;
    for(auto &value : v){
        cout<<value<<endl;
    }
}

int main(){
    int N;
    cin>>N;
    vector<int>v[N];
    for(int i=0;i<N;i++){
        int n;
        cin>>n;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
    for(int i=0;i<N;i++){
        printVec(v[i]);
    }
    
    // cout<<v[0][1]; // 0th vector ka 1st element 
    //## Number of rows fix, column dynamic
    return 0;
}