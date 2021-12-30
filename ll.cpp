// #include<iostream>

// using namespace std;

// class node{
//     public:
//     int data;
//     node *next;
//     node (int data){
//         this->data=data;
//         next=NULL;
//     }
// };
// int main(){

//     node *n1=new node(1);
//     node *head=n1;
//     node *n2 = new node(2);
//     n1->next=n2;
//     node *n3 = new node(3);
//     n2->next=n3;
//     node *n4 = new node(4);
//     n3->next=n4;
//     cout<<n4<<endl;
//     cout<<head->next->next->next;
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
//         string S,W;
//         cin>>S;
//         cin>>W;
//         int l=0;
//         int A[N+1];
//         for(int i=0;i<=N;i++){
//             cin>>A[i];
//         }
//         for(int i=0;i<N;i++){
//             if(S[i]==W[i]){
//                 l=i;
//             }
//             else continue;
//         }
//         cout<<A[l]<<endl;
//     }
//     return 0;
//  }

// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int T;
// 	cin>>T;
// 	while(T--){
// 	string s;
// 	cin>>s;
//     for(int i=0;i<s.size()/2;i++){
//         int temp;
//         temp=s[i];
//         s[i]=s[s.size()-i-1];
//         s[s.size()-i-1] = temp;
//     }
// 	for(int i=0;i<s.size();i++){
// 	    if(s[i]==0) i++;
// 	    else cout<<s[i];
// 	    }
//         cout<<endl;
// 	}
// 	return 0;
// }

// if a==p and b==q:
//             print(0)
//         elif (a+b)%2==0 and (p+q)%2==0:
//             print(2)
//         elif (a+b)%2!=0 and (p+q)%2!=0:
//             print(2)
//         elif (a+b)%2!=0 and (p+q)%2==0:
//             print(1)
//         elif (a+b)%2==0 and (p+q)%2!=0:
//             print(1)

// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int n;
//         cin>>n;
//         // int s[n];
//         // for(int i=0;i<n;i++){
//         //     cin>>s[n];
//         // }
//         string s;
//         cin>>s;
//         int one=0,zero=0;
//      if(n>=2){
//             for(int i=0;i<n;i++){
//             if(s[i]=='1') one++;
//             else if(s[i]=='0') zero++;
//         }
//     }
//         if(one==n || zero==n) cout<<"BOB"<<endl;

//         else if(one>zero){
//             if(zero%2==1) cout<<"ALICE"<<endl;
//             else if(zero%2==0) cout<<"BOB"<<endl;
//         }
//         else if(zero>one){
//             if(one%2==1) cout<<"ALICE"<<endl;
//             else if(one%2==0) cout<<"BOB"<<endl;
//         }
//         else if(one==zero) cout<<"BOB"<<endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int N,B;
//         cin>>N>>B;
//         int A[N];
//         float amount=0;
//         for(int i=0;i<N;i++){
//             cin>>A[i];
//             amount+=A[i];
//         }
//         if(amount<=B){
//             cout<<"YES"<<endl;
//         }
//         else if(amount>B && amount>1000){
//                 float discount = amount/10;
//                 amount = amount - discount;
//                 if(amount<=B){
//                     cout<<"YES"<<endl;
//                 }
//                 else cout<<"NO"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
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
//      int x,y,z;
//      cin>>x>>y>>z;
//         if(x==y && y==z) {
//             x=1;y=1;z=1;
//             cout<<x<<" " <<y<<" "<<z<<endl;
//             }
//         // else if((x==y)>z){
//         //     z=(x+1)-z;x=0;y=0;
//         //     cout<<x<<" " <<y<<" "<<z<<endl;
//         // }
//         // else if((y==z)>x){
//         //     x=(z+1)-z;z=0;y=0;
//         //     cout<<x<<" " <<y<<" "<<z<<endl;
//         // }
//         // else if((x==z)>y){
//         //     y=(z+1)-y;z=0;y=0;
//         //     cout<<x<<" " <<y<<" "<<z<<endl;
//         // }
//         else if(x>(y&&z)){
//             y=(x+1)-y;z=(x+1)-y;x=0;
//             cout<<x<<" " <<y<<" "<<z<<endl;
//         }
//         else if(y>(x&&z)){
//             x=(y+1)-x;z=(y+1)-z;y=0;
//             cout<<x<<" " <<y<<" "<<z<<endl;
//         }
//         else if(z>(x&&y)){
//             x=(z-x)+1;y=(z-y)+1;z=0;
//             cout<<x<<" " <<y<<" "<<z<<endl;
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
//         int N,count=0;
//         cin>>N;
//         if(N<=6) cout<<15<<endl;
//         else if(N>6 && N<=8) cout<<20<<endl;
//         else if(N>8 && N<=10) cout<<25<<endl;
//         else if(N%6==0){
//            count = N/6;
//            cout<<15*count<<endl;
//         }
//         else if(N%8==0){
//            count = N/8;
//            cout<<20*count<<endl;
//         }
//         else if(N%10==0){
//            count = N/10;
//            cout<<25*count<<endl;
//         }
//         else if(N>10 && N<12) cout<<15*2<<endl;
//         else if(N>12 && N<16) cout<<20*2<<endl;
//         else if(N>16){
//             while(N<=10){
//                 int i=0;
//                 count = N/10;
//                 i++;
//                 if(N>8 && N<=10) cout<<25*i<<endl;
//                 else if(N>6 && N<=8) cout<<20*i<<endl;
//                 else if(N<6) cout<<15*i<<endl;
//             }
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void printRoman(int number)
// {
//     int num[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
//     string sum[] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
//     int i = 12;  //i=0   num=12
//     while (number > 0)
//     {
//         int div = number / num[i]; // div = 3
//         number = number % num[i];// number=0
//         while (div--)
//         {
//             cout << sum[i]; // M
//         }
//         i--;
//     }
// }

// int main()
// {
//     int number;
//     cout << "Enter the number--> "<<endl;
//     cin >> number;
//     printRoman(number);
//     return 0;
// }

// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int H,M,X;
//         cin>>H>>M>>X;
//         if(X==5) cout<<H<<" "<<M<<endl;
//         else if(X>5){ 

//             M = M+(X-5);

//             if(H<=23 && M<=55){
//                 H++;
//                 if(M==60) M=0;
//                 else M=(M-60);
//                 }
//             else{
//                 H++;
//                 if(H>=23 && M>60) H=25-H;
//                 if(M==60) M=0;
//                 else M=(M-60);
//                 }
            
//             cout<<H<<" "<<M<<endl;
//         }
//         else{
//             cout<<H<<" "<<M<<endl;
//         }
//     }
//     return 0;
// }


// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int K;
//     cin>>K;
//     int N=1;
//     string s="";
//     int i=0,j=1;
//     for(int i=0;i<N;i++){
//         if(i==0) cin>>s[i];
//         for(j;j<(j+K);j++){
//             if(i==0) continue;
//             else {cin>>s[j];N++;}
//         }
//         j+=i;
//     }
//     cout<<s;
//     // int count=0;
//     // for(int i=0;i<s.size()-1;i++){
//     //     for(int j=0;j<s.size();j++){
//     //         if(s[i]==s[j]) count++;
//     //     }
//     //     if(count<K) cout<<s[i]<<endl;
//     // }
//     return 0;
// }


// #include<bits/stdc++.h>

// using namespace std;
// _Bool is_palindrome(unsigned n)
// {
//     unsigned m = 0;
//     for(unsigned tmp = n; tmp; tmp >>= 1)
//         m = (m << 1) | (tmp & 1);
//         return m == n;
// }
// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//     unsigned n;
//     cin>>n;
//     while((n+1))
//     bool c = is_palindrome(n);
//     cout<<c<<endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         string s;
//         cin>>s;
//         int ans=0;
//         for(int i=0;i<s.size();i++){
//             ans+=s[i];
//             cout<<ans<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int T,sum=0;
// 	cin>>T;
// 	while(T-- >0){
// 		int n;
// 		cin>>n;
// 		while(n>0){
// 			int k = n%10;
// 			sum+=k;
// 			n/=10;
// 		}
// 		cout<<sum<<endl;
//         sum=0;
// 	}
// 	return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int T;
// 	cin>>T;
// 	while(T-- >0){
// 		long long int N;
// 		cin>>N;
// 		int last=N%10;
//         int first;
// 		while(N>=10){  
// 			N/=10;  
// 		    first=N;
// 		}
// 		cout<<first+last<<endl;
// 		first=0,last=0;	
// 	}
// 	return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main(){
	int T;
	cin>>T;
	while(T--){
		long long int N;
		cin>>N;
        int count=0;
		while(N>0){  
        if((N%10)==4) count++;
			N/=10;  
		}
		cout<<count<<endl;
	}
	return 0;
}















































