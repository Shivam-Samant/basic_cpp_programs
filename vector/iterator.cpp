//## it++ -> next iterator or it+1 -> next location
#include<bits/stdc++.h>

using namespace std;

int main(){
    // vector <int> v={2,3,4,5,6,7};
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    // // vector<int>::iterator it;
    // vector<int>::iterator it=v.begin();
    // // cout<<(*it)<<endl;
    // // cout<<(*(it+1))<<endl;
    
    // for(it=v.begin();it!=v.end();++it){
    //     cout<<(*it)<<endl;
    // }

    // vector pair 
    vector<pair<int,int>>v_p={{1,2},{2,3},{3,4}};

    // vector<pair<int,int>>::iterator it;
    // for(it=v_p.begin();it!=v_p.end();++it){
    //     // cout<<(*it).first<<" "<<(*it).second<<endl;
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    // OR
    for(auto pr : v_p){   // for reference-> for(auto &pr : v_p)
        cout<<pr.first<<" "<<pr.second<<endl;
    }

    return 0;
}