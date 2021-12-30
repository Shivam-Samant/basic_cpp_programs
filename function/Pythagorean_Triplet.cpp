#include<iostream>
#include<math.h>
using namespace std;
// void Pythagorous_triplet(int B,int P, int H){
//     int LHS=pow(P,2)+pow(B,2);
//     int RHS=pow(H,2);
//     if(LHS==RHS){cout<<"This is a pythagorean triplet"<<endl;}
//     else{cout<<"This is not a pythagorean triplet"<<endl;}
// }
// int main(){
//     int H,P,B;
//     cout<<"Enter the value of the base of a triangle: "<<endl;
//     cin>>B;
//     cout<<"Enter the value of the perpendicular of a triangle: "<<endl;
//     cin>>P;
//     cout<<"Enter the value of the Hypotenous of a triangle: "<<endl;
//     cin>>H;
//     Pythagorous_triplet(B,P,H);

bool check(int x,int y,int z){
    int a=max(x,max(y,z));
    int b,c;
    if(a==x){b=y;c=z;}
    else if(a==y){b=x;c=z;}
    else{b=x;c=y;}

    if(a*a == b*b + c*c){return true;}
    else{return false;}
}

    int main(){
        int x,y,z;
        cin>>x>>y>>z;

        if(check(x,y,z)){
            cout<<"Pythagorean Triplet";
        }
        else{cout<<"Not a pythagorean triplet";}
    return 0;
}