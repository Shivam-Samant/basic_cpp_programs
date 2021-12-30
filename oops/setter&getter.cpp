#include<bits/stdc++.h>

using namespace std;

class student{
    string name;
    public:
    int age;
    bool gender;
    void setName(string s){
        name = s;
    }
    void getName(){
        cout<<"Name = "<<name<<endl;
    }

    void printInfo(){
            // cout<<"Name = "<<name<<endl;
            getName();
            cout<<"Age = "<<age<<endl;
            cout<<"Gender = "<<gender<<endl;
    }
};

int main(){
    student arr[3];
    for(int i=0;i<3;i++){
        string s;
        cout<<"Name = ";
        cin>>s;
        arr[i].setName(s);
        cout<<"Age = ";
        cin>>arr[i].age;
        cout<<"Gender = ";
        cin>>arr[i].gender;
        cout<<endl;
    }
    for(int i=0;i<3;i++){
        arr[i].printInfo();
    }
    return 0;
}