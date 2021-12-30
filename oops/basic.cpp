#include<bits/stdc++.h>

using namespace std;

class student{
    public:
    string name;
    int age;
    bool gender;

    void printInfo(){
            cout<<"Name = "<<name<<endl;
            cout<<"Age = "<<age<<endl;
            cout<<"Gender = "<<gender<<endl;
    }
};

int main(){
    student arr[3];
    for(int i=0;i<3;i++){
        cout<<"Name = ";
        cin>>arr[i].name;
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