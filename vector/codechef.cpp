// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int A[]={1,7,3,4,7,2,1,2,4,5,3};
//     int size=sizeof(A)/sizeof(int);
//     sort(A,A+size);
//     for(int i=0;i<size;i+=2) if(A[i]!=A[i+1]) {cout<<A[i];break;}
//     return 0;
// }


// #include<bits/stdc++.h>

// // #define long long int   lli
// using namespace std;

// int main(){
//     int  T;
//     cin>>T;
//     while(T--){
//         int N;
//         cin>>N;
//         int A[N];
//         for(int i=0;i<N;i++){
//             cin>>A[i];
//         }
//         int arr[N];int maxDiff=0,minDiff=100;// max no. in an array
//         // vector<pair<int,int>> v1;
//         for(int i=0;i<N-1;i++){
//             if(abs(A[i]-A[i+1])>maxDiff){
//                 maxDiff+=abs(A[i]-A[i+1]); 
//             }
//             else{
//                 minDiff+=abs(A[i]-A[i+1]);
//             }
//         }
//     }
//     return 0;
// }   


// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int  T;
//     cin>>T;
//     while(T--){
//         int K;
//         cin>>K;
//         string s,i=0;
//         while(true){
//             cin>>A[i];i++;
//             if(A[i]==0) break;
//         }
//         for(int i=0;i<N;i++){
//             cout<<A[i]<<endl;
//         }
//     }
//     return 0;
// } 


// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int N,K;
//         cin>>N>>K;
//         if(N%K==0) cout<<N/K<<endl;
//         else cout<<-1<<endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int x,y,k;
//         cin>>x>>y>>k;
//         if(x%k==0 && y%k==0) cout<<"YES"<<endl;
//         else cout<<"NO"<<endl;   
//     }
//     return 0;
// }


// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int N,M;
//         cin>>N>>M;
//         int count=0;
//         int k=N-M; // N=7 M=2 k=5 first = 3        ans = 7
//         int first=k-M;
//         int ans=0;
//         if(first%2==0) {
//             while(first>0){
//                 if(first==1) {ans+=1;cout<<M+ans<<endl;break;}
//                 first-=2;
//                 ans+=3;
//             }
//         }
//         else{
//             while(first>0){
//                 if(first==1) {ans+=1;cout<<M+ans+1<<endl;break;}
//                 first-=2;
//                 ans+=3;
//             }
//         }
//     }
//     return 0;
// }


// #include<bits/stdc++.h>

// using namespace std;

// long long int value(long long int x,long long int y){
//     if(y==0){
//         return x;
//     }
//     else return value(y,x%y);
// }
// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int N,K;
//         cin>>N>>K;
//         int count=0;
//         long long int a=value(N,K);
//         count= N/a;
//         cout<<count<<endl;
//     }
//     return 0;
// }


//Q. subscribe       to  my  channel -> convert all in capital and after in each word do endl;
// #include<bits/stdc++.h>

// using namespace std;

// void capital(string s){
//     for(int i=0;i<s.size();i++){
//         char c = s[i]-'a'+'A';
//         cout<<c;
//     }
//     cout<<endl;
// }

// int main(){
//     while(true){
//         string s;
//         cin>>s;
//         capital(s);
//         if(s.size()==0) break;
//     }
//     return 0;
// }


// Q. Binary to decimal -> 101
// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//    string s;
//    cin>>s;
//    int ans=0;
//    int power2 = 1;
//    for(int i=s.size()-1;i>=0;i--){
//     //    int power2 = pow(2,s.size()-i-1);
//     //    int m = (s[i]-'0')*n;
//         int m = (s[i]-'0')*power2;
//         power2*=2;
//         ans+=m;
//    }
//    cout<<ans<<endl;
//     return 0;
// }

// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int n;
//         cin>>n;
//         if(n<21) cout<<"NO"<<endl;
//         else cout<<"YES"<<endl;
//     }
//     return 0;
// }


// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int N,X,K;
//         cin>>N>>X>>K;
//         int A[N],B[N];
//         for(int i=0;i<N;i++){
//             cin>>A[i];
//         }
//         for(int i=0;i<N;i++){
//             cin>>B[i];
//         }
//         int count=0;
//         for(int i=0;i<N;i++){
//             if(abs(A[i]-B[i])<=K) count++;
//         }
//         if(count>=K) cout<<"YES"<<endl;
//         else cout<<"No"<<endl;
//     }
//     return 0;
// }


#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int N,K;
        cin>>N>>K;
        int val = N;
        int mult=1;
        while(N>0){
            if(N%10==0) {mult=0;break;}
            mult*=N%10;
            N/=10;
        }
        if(K==0) cout<<mult<<endl;
        else{
            if(val==1) cout<<mult+K<<endl;
            else{    
                mult=1;
                int i=1,j=1,r=0;
                while(val>0){
                    r++;
                    if((val%10)>=0 && (r<K) ) 
                    if((val%10)==0) {mult=0;break;}
                    if((val%10)==9) {mult*=9;val/=10;}
                    else{
                        if(i>K) j=0;
                        int c = val%10+j;
                        mult*=c;
                        val/=10;
                        i++;
                    }
            }
            cout<<mult<<endl;}
        }
    }
    return 0;
}



































