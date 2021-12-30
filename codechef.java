// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int N,j=0,A[5*N];
//         int total=0;
//         cin>>N;  
//         for(int i=0;i<N;i++){
//             for(j;j<5*N;j++){
//                 cin>>A[j];
//                 if(j%5==0){
//                    sort(A[(j/5)-1],A[j+5]);
//                    total+=A[j];
//                    cout<<endl;
//                } 
//             }
//         }
//         cout<<total;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int N,X,P;
//         cin>>N>>X>>P;
//         if((X*3)-(N-X)>=P){cout<<"PASS"<<endl;}
//         else{cout<<"FAIL"<<endl;}
//     }
//     return 0;
// }


// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int A[5],ria=0,rahul=0;
//         for(int i=0;i<5;i++){
//             cin>>A[i];
//         }
//         for(int i=0;i<5;i++){
//             else if(A[i]==1) rahul++;
//             else if(A[i]==2) ria++;
//         }
//         if((rahul>ria)) cout<<"RAHUL"<<endl;
//         else if((ria>rahul)) cout<<"RIA"<<endl;
//         else cout<<"DRAW"<<endl;
//     }
//     return 0;
// }




// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     short T;
//     cin>>T;
//     while(T--){
//         int N;
//         cin>>N;
//         short A[N],count=0,ans=0;
//         for(int i=0;i<N;i++){
//             cin>>A[i];
//         }
//         for(int i=0;i<=N/2;i++){ 
//             for(int j=i+1;j<N;j++) if(A[i]==A[j]) count++;
//             if(count>=N/2){ans=1;cout<<A[i]<<endl;break;}
//             else count=0;
//         }
//             if(ans==0) {cout<<-1<<endl;
//     }
//  }
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
//         int A[N];
//         stack<int> s;
//         for(int i=0;i<N;i++){
//             cin>>A[i];
//             s.push(A[i]);
//         }
//         while(!s.empty()){

//         }
//     }
//     return 0;
// }

// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     short T;
//     cin>>T;
//     while(T--){
//         string S;
//         cin>>S;
//         int count=0;
//         if(S.length()%2==0){
//             for(int i=0;i<(S.length()/2)-1;i++){
//                 if(S[i]<=S[i+1]) {++count;}
//                 else break;
//             }
//             for(int i=(S.length()/2);i<S.length()-1;i++){
//                 if(S[i]<=S[i+1]) {++count;}
//                 else break;
//             }
//         }
//         if(S.length()%2==1){
//             for(int i=0;i<(S.length()/2);i++){
//                 if(S[i]<=S[i+1]) {++count;}
//                 else break;
//             }
//             for(int i=(S.length()/2)+1;i<S.length()-1;i++){
//                 if(S[i]<=S[i+1]) {++count;}
//                 else break;
//             }
//         }
//         if(count==(S.length()-2)) cout<<"PERFECT"<<endl;
//         else cout<<"NOT PERFECT"<<endl;
//         }
//     return 0;
// }

// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int a,b,X,count=0;
//         cin>>a>>b>>X;

//         if(a>b){while(b<=X){
//             b+=b;count++;
//             }
//         }
        
//         if(a<b){while(a<=X){
//            ++count;a+=a;
//             }
//         }

//         if(a==b){while(a<=X){
//             a+=a;count++;
//             }
//     }
//     cout<<count<<endl;
//     }
//     return 0;
// }


// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int n,count=0,diff=0,same=0;
//         cin>>n;
//         int A[n];
//         for(int i=0;i<n;i++){
//             cin>>A[i];
//         }
//             for(int i=0;i<n-1;i++){
//                 for(int j=i+1;j<n;j++){
//                 if(A[i]==A[j]) same++;
//                 }
//                 // if(same==n-1) cout<<"yes"<<endl;break;
//                 // if(diff>=12) count++;      
//                 if(A[i]!=A[i+1]) diff++;
//             }
//             if(n<12){
//                 cout<<"NO"<<"\n";
//                 continue;
//             }
//             if(same+diff>=n-1){
//                 cout<<"YES"<<"\n";
//                 continue;
//             }
//             else{
//                 cout<<"NO"<<"\n";
//                 continue;
//             }
//     }
//     return 0;
// }

// import java.io.*;
// import java.util.*;

// public class codechef{
//     public static void main(String[] args)throws Exception{
//         Scanner sc=new Scanner(System.in);
//         int t=sc.nextInt();
//         try{
//         while(t-- >0){
//             int n=sc.nextInt();
//             int s=0;
//             int d=0;
//             int z=0;
//             int A[]=new int[n];
//             for(int i=0;i<n;i++){
//                 A[i]=sc.nextInt();
//             }
//              for(int i=0;i<n-1;i++){
//                  if(A[i]!=A[i+1]){
//                      d++;
//                  }
//                 }
//             for(int i=0;i<n;i++){
//                 if(A[i]==A[i+1]){
//                     s++;
//                 }
//             }
//             for(int i=0;i<n;i++){
//                 for(int j=1;j<n;j++){
//                     if(A[i]==A[j]){
//                         z++;
//                     }
//                 }
//             }
//             if(n<12){
//                 System.out.println("NO");
//                 continue;
//             }
//             if(d>11){
//                 System.out.println("NO");
//                 continue;
//             }
//             else if(s==n-1||(d+z)>=n-1){
//                 System.out.println("YES");
//                 continue;
//             }
//             else{
//                 System.out.println("NO");
//                 continue;
//             }
//         }
//     }
//     catch(Exception e){
//         return;
//     }
//     }
// }

// import java.io.*;
// import java.util.*;

// public class codechef{
//     public static void main(String[] args)throws Exception{
//         Scanner sc=new Scanner(System.in);
//         int t=sc.nextInt();
//         try{
//         while(t-- >0){
//             int n=sc.nextInt();
//             int s=0;
//             int d=0;
//             int a[]=new int[n];
//             for(int i=0;i<n;i++){
//                 a[i]=sc.nextInt();
//             }
//             for(int i=0;i<n-1;i++){
//                 if(a[i]!=a[i+1]&&(a[i]>=1&&a[i]<=12)){
//                     s++;
//                 }
//                 if(a[i]<1||a[i]>12){
//                     System.out.println()
//                 }
//             }
//     }
//     catch(Exception e){
//         return;
//     }
//     }
// }


import java.io.*;
import java.util.*;

public class codechef{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int ab=sc.nextInt();
        int cb=sc.nextInt();
        int a[]=new int[ab];
        for(int i=0;i<ab;i++){
            a[i]=sc.nextInt();
        }
        int b[]=new int[cb];
        for(int i=0;i<cb;i++){
            b[i]=sc.nextInt();
        }
        int z=ab+cb;
        int l[]=new int[z];
        int t=0;
        int k=a.length;
        int v=0;
        for(int i=0;i<a.length;i++){
            l[t]=a[i];
            t++;
        }
        for(int i=0;i<b.length;i++){
            l[k]=b[i];
            k++;
        }
        for(int i=0;i<z-1;i++){
            for(int j=0;j<z-1-i;j++){
                if(l[j]>l[j+1]){
                    int o=l[j];
                    l[j]=l[j+1];
                    l[j+1]=o;
                }
            }
        }
        int m=0;
        for(int i=0;i<z-1;i++){
            if(l[i]!=l[i+1]){
                m++;
            }
        }
        int n=m+1;
        System.out.println(n);
    }
}






















































































































