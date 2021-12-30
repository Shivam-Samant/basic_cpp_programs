#include<bits/stdc++.h>
using namespace std;
int main(){
	int T,N,K;
	cin>>T;
	while(T--){
		cin>>N>>K;
		int A[N];
		for(int i=0;i<N;i++){
			cin>>A[i];
		}
		sort(A, A + N);int ans = 0;
			for(int i=N-1;K>0;i--){
				for(int j=N;j>0;j--){
					if(A[N]==A[j-1]){
						ans++;
					}
				}
		}
		cout<<ans<<endl;
	}
}