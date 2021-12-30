// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int B;
//         cin>>B;
//         float H,copy;
//         H = sqrt((B*B)+(B*B));
//         int ans = 0;
//         copy=H;
//         if(B==0 || B==1 || B==2 || B==2) cout<<0<<endl;
//         else if(B==3 || B==4) cout<<1<<endl;
//         else {
//             while(copy>4){
//                 if(B%2==0){
//                     // ans += B/2;
//                     // H-=2.82;
//                     H=0;
//                     H+=2.82;
//                     if(H==copy) copy-=2.82;
//                     }
//                 else{
//                     H=0;
//                     H+=1.41;
//                     if(H==copy) copy-=1.41;
//                     // ans += B/2;
//                     // H -= 1.41;
//                 }
//             }
//             cout<<ans<<endl;
//         }

//     }
//     return 0;
// }


// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     // int A[5]={1,2,3,2,1},B[6]={5,7,2,7,1,6};
//     int n,m;
//     cin>>n;
//     int A[n];
//     for(int i=0;i<n;i++){
//         cin>>A[i];
//     }
//     cin>>m;
//     int B[m];
//     for(int i=0;i<n;i++){
//         cin>>B[i];
//     }
//     int C[m+n],count=0;
//     for(int i=0;i<11;i++){
//         if(i<n) C[i]=A[i];
//         else C[i]=B[i-n];
//     }
//     for(int i=0;i<10;i++)
//         for(int k=i+1;k<11;k++) if(C[i]==C[k] && C[i]>0 && C[k]>0) {count++;C[k]=-1;}
//     cout<<(m+n)-count<<endl;
//     return 0;
// }

// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         char A[3];
//         for(int i=0;i<3;i++){
//             cin>>A[i];
//         }
//         char B[2];
//         for(int i=0;i<2;i++){
//             cin>>B[i];
//         }
//         for(int i=0;i<3;i++){
//             int j=0,k=1;
//             if(A[i]==B[j]) {cout<<B[j]<<endl;break;}
//             else if(A[i]==B[k]){cout<<B[k]<<endl;break;}
//         }
//     }
//     return 0;
// }


//  Q. Kth smallest no.

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int A[n];
//     for(int i=0;i<n;i++) cin>>A[i];
//     int k;
//     cin>>k;
//     int min=0,max=A[0];
//     for(int i=1;i<n;i++) if(max<A[i]) max=A[i];
//     while(k--){
//         for(int i=0;i<n;i++) if(A[i]<A[min]) min=i;
//         if(k==0) cout<<A[min]<<endl;
//         else A[min]=max;
//     }
//     return 0;
// }


// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int N;
//         cin>>N;
//         string S;
//         cin>>S;
//         int zero=0,one=0,sign=0;
//         for(int i=0;i<N;i++){
//             if(S[i]=='0') zero++;
//             else if(S[i]=='1') one++;
//             else sign++;
//         }
//         int oneP=0,zeroP=0,signP=0;
//         while(sign--){
//             if((one+zero)==N) {break;}
//             if(zero>one){
//                 one++;oneP++;signP--;
//             }
//             else if(one>zero){
//                 zero++;zeroP++;signP--;
//             }
//             else{zero++;zeroP++;signP--;}
//         }
//         for(int i=0;i<N;i++){
//             if(S[i]=='?'){
//                 if(oneP>0){S[i]='1';oneP--;}
//                 else if(zeroP>0){S[i]='0';zeroP--;}
//             }
//         }
//         cout<<S<<endl;
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
//         int A[N];
//         for(int i=0;i<N;i++){
//             cin>>A[i];
//         }
//         int count=1;
//         if(N==1 && A[0]<=K) cout<<"YES"<<endl;
//         else if(N==1 && A[0]>K) cout<<"NO"<<endl;
//         sort(A,A+N);
//         if(N>1){
//             for(int i=0;i<N-1;i++){
//                 for(int j=1;j<N;j++){
//                 if((A[i]+A[j])<=K){
//                     N--;count=0;
//                 }
//                 else count=1;
//                 }
//             }
//             if(count==0) cout<<"YES"<<endl;
//             else cout<<"NO"<<endl;
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
//         int xk,yk,x1,y1,x2,y2;
//         cin>>xk>>yk>>x1>>y1>>x2>>y2;
//         if(xk==1 && yk==1){
//             // if((x1>1 && y1>=1) && (x2>1 && y2==2) ||  ) cout<<"YES\n";
//             if(x1>xk && y1==yk && x2>xk && y2==yk) cout<<"YES\n";
//             else{
//                 if((x1==2 && y1==2) || (x2==2 && y2==2)) cout<<"YES\n";

//             }
//         }
//         else if(xk==1 && yk==8) {
//             if(x1<yk && yk && )
//         }
//         else if(xk==8 && yk==1){

//         }
//         else if(xk==8 && yk==8){

//         }
//     }
//     return 0;
// }


// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int sum=0;
//     int A[3];
//     for(int i=0;i<3;i++){
//         cin>>A[i];
//     }
//     sort(A,A+3);
//     for(int i=1;i<3;i++){
//         sum+=abs(A[i]-A[i-1]);
//     }
//     cout<<sum<<endl;
//     return 0;
// }

// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int N;
//     cin>>N;
//     int K=N;
//     while(N--){
//         string S;
//         cin>>S;
//         char last;
//         int count=0;
//         vector<string>s[N];
//         int j=0;
//         s[j].push_back(S);
//         j++;
//         // if(N<K){
//         //     if(S[0]!=last){cout<<"NO\n";count=1;break;}
//         // }
//         // last = S[S.length()-1];
//         // for(int i=0;i<N;i++){
//         //     if(strcmp(s[i],S)==0) {cout<<"NO\n";count=1;break;}
//         // }
//         // if(count==0) cout<<"YES\n";
//     }
//     for(int i=0;i<N;i++){
//         cout<<s[i]<<" ";
//     }
//     return 0;
// }



#include<bits/stdc++.h>

using namespace std;

int main(){
    void *t;
    cout<<t<<endl;
    cout<<"HELLO WORLD";
    return 0;
}





























