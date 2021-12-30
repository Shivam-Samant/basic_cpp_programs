// Q.1

// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int X,Y,A,B,K;
//         cin>>X>>Y>>A>>B>>K;
//         while(K--){
//             X+=A;Y+=B;
//         }
//         if(X>Y) {cout<<"DIESEL"<<endl;}
//         else if(X==Y){cout<<"SAME PRICE"<<endl;}
//         else{cout<<"PETROL"<<endl;}
//     }
//     return 0;
// }




// Q.2

// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//      int T;
//     cin>>T;
//     while(T--){
//         int X,Y;   
//         cin>>X>>Y;
//         if(X==0&&Y%2==0) {cout<<"YES";continue;}
//         else if(X%2==0&&Y!=0) {cout<<"NO";continue;}
//         if((X+(Y*2))%2==0) {cout<<"YES";}
//         else {cout<<"NO";}
//         cout<<endl;
//     }
//     return 0;
// }




// Q.3

// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int T;            
//     cin>>T;
//     while(T--){   
//     int N;   
//     cin>>N;
//     int arr[N]; 
//     for(int i=0;i<N;i++){
//         cin>>arr[i];
//     }
//     int count=0;
//     for(int i=0;i<N;i++){     
//          if(arr[i]%2!=0){
//              count++;         
//              }             
//    }    
//     if(count<=1){
//         cout<<0<<endl;
//     }
//     else{   
//         cout<<count/2<<endl;
//     }
// }
//     return 0;
// }



//  Q4

#include <bits/stdc++.h>
using namespace std;

void KSwapMaximum(int arr[], int n, int k)
{
	for (int i = 0; i < n - 1 && k > 0; ++i) {
		int indexPosition = i;
		for (int j = i + 1; j < n; ++j) {
			if (k <= j - i)
				break;
			if (arr[j] > arr[indexPosition])
				indexPosition = j;
		}
		for (int j = indexPosition; j > i; --j)
			swap(arr[j], arr[j - 1]);

		k -= indexPosition - i;
	}
}

int main(){  
    int T;
    cin>>T;
    while(T--){
	int N;
    cin>>N;
    int arr[N];
	for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    int k=0;
    for(int j=0;j<N-1;j++){
        if(arr[j]>arr[j+1]){
            k=arr[j];
        }
        else{k=arr[j+1];}
    }
    cout<<k;
	KSwapMaximum(arr, N, k);
        // palindrome condition
    int count;
    for(int i=0;i<N;++i){
        if(arr[0]==arr[i])  {count++;}
    }
    for(int i=0;i<N;i++){
        if(count==N-1){cout<<-1;}
        else{
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
}
}











































































