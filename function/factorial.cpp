// Find the factorial of 2 numbers given as input
#include<iostream>
using namespace std;
void Fact(int n){
    int Orignal_n=n;
    int x=1;
    for(n;n>=2;n--) x=x*n;
    cout<<"The factorial of "<<Orignal_n<<" is "<<x<<endl;
}

int main(){
    int n1,n2;
    cout<<"Enter a number: "<<endl;
    cin>>n1;
    cout<<"Enter a number: "<<endl;
    cin>>n2;
    Fact(n1);
    Fact(n2);
}