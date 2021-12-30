#include<iostream>

using namespace std;

int main(){
    // int n;
    // cout<<" Enter the size of an array: ";
    // cin>>n;
    int n=4;
    
    // int arr[n];
    // cout<<"Enter the array element"<<endl;
    // for(int i=0;i<n;i++) cin>>arr[i];
    int arr[]={2,7,11,15};
    
    // int target;
    // cout<<"Enter the value of target: ";
    // cin>>target;
    int target = 18;

int counter =0;
int i=0, j=1;
    while(counter<n-1){
        if(arr[i]+arr[j]==target) {cout << i << " " << j; break;}
        if (counter==2 && arr[i]+arr[j]!=target){ counter = 0;i++;j=1;}
        counter++;j++;
    }

    return 0;
}





















    // for(int i=0;i<n-1;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(arr[i]+arr[j]==target){
    //             cout<< i << " " << j;
    //             break;
    //         }
    //     }
    // }