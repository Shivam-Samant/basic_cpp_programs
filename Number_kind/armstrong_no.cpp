#include<iostream>
#include<cmath>
using namespace std;
int main(){
 int n,sum=0;
 cin>>n;
 int original_n=n;
 while(n>0){
     int lastdigit = n%10;
     int cube=pow(lastdigit,3);
     sum+=cube;
     n=n/10;
 }   
 if(original_n==sum){cout<<original_n<<" is a armstrong number";}
 else{cout<<original_n<<" is not a armstrong number";}
}