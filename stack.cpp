// #include <iostream>

// using namespace std;

// int n=100;
// int a[100];
// int t=-1;

// void push(int v){
//    if(t>=n-1){
//       cout<<"stack overflow\n";
//    }
//    else{
//       t++;
//       a[t]=v;
//    }
// }

// void pop(){
//    if(t<=-1){
//       cout<<"stack underflow\n";
//    }
//    else{
//       cout<<"Popped element is "<<a[t]<<"\n";
//       t--;
//    }
// }

// void display(){
//    if(t==-1){
//       cout<<"stack is empty";
//    }
//    else{
//       for(int i=t;i>=0;i--){
//          cout<<a[i]<<" \n";
//       }
//    }
// }

// int main(){
//    int ch,v;
//    cout<<"1 for pushing element\n";
//    cout<<"2 for popping element\n";
//    cout<<"3 for displaying element\n";
//    cout<<"4 for exit\n";
//    do{
//       cout<<"Enter the choice: ";
//       cin>>ch;
//       switch(ch){
//          case 1:{
//             cin>>v;
//             push(v);
//             break;
//          }
//          case 2:{
//             pop();
//             break;
//          }
//          case 3:{
//             display();
//             break;
//          }
//          case 4:{
//             cout<<"Exit"<<"\n";
//             break;
//          }
//          default:{
//             cout<<"Invalid option";
//             break;
//          }
//       }
//    }while(ch!=4);
//    return 0;
// }

#include<bits/stdc++.h>

using namespace std;

int t=-1;
int n=100;
int a[100]; 

void push(int x){
    if(t>=n){
        cout<<"Stack overflow"<<endl;
    }
    else{
        t++;
        a[t]=x;
    }
}

void pop(){ 
    if(t<0){
        cout<<"Stack underflow"<<endl;
    }
    else{
        cout<<"The element "<<a[t]<<" is popped"<<endl;
        t--;
    }
}

void display(){  
    if(t<0){cout<<"Stack is empty"<<endl;} 
    else{
        for(int i=t;i>=0;i--){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int x;
    char ch;
    cout<<"Enter the number 1 for push the value: "<<endl;
    cout<<"Enter the number 2 for pop the value: "<<endl;
    cout<<"Enter the number 3 for display the value: "<<endl;
    cout<<"Enter the number 4 for exit the program: "<<endl;
    do{
    cout<<"Choose a number: ";
    cin>>x;
    switch(x){
        case 1:
            int v;
            cout<<"Enter the value"; cin>>v; push(v); break;
        case 2: pop(); break;
        case 3: display(); break;
        case 4: cout<<"Exit"; break;
        default: cout<<"Invalid number";
    }
    }while(x!=4);
    return 0;
}




























