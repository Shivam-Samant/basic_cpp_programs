#include<iostream>
using namespace std;
int Linear_Search(int arr[],int size,int element){
        for(int i=0;i<size;i++){
            if(arr[i]==element){
                return i;
            }
        }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int size=sizeof(arr)/sizeof(int);
    int element= 5;
    int Ans = Linear_Search(arr,size,element);
    cout<<"The element "<<element<<" is present at index "<<Ans;
    return 0;
}