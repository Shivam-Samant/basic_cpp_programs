#include<iostream>
using namespace std;
int BinarySearch(int arr[],int size,int element){
int low=0;
int high=size-1;
for(int i=0;i<size;i++){
int mid= (low+high)/2;
        if(arr[mid]==element){return mid;}
        else if (arr[mid]<element){low = mid+1;}
        else {high=mid-1;} 
    
    }
return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(int);
    int element = 5;
    int Ans = BinarySearch(arr, size, element);
    cout<<"The value of an element is "<<element<<" and it's index is "<<Ans;
}