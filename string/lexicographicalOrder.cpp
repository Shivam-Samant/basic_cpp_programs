#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++){
            cin>>a[i];
        }
       
       int inc=0,dec=0;
       for(int i=0;i<N-1;i++){
           if(a[i]>a[i+1]){
               dec++;
           }
           else{inc++;}
       } int third_con=0;
       if(dec==N){cout>>} //dec sort 
       else if(inc==N){cout>>} //inc sort

       else{
           for(int i=0;i<N-1;i++){
            for(int j=i+1;j<N;j++){
                if(j<i&&a[j]<a[j+1]){
                    third_con++;
                }
                else if(j>=i&&j<N&&a[j]>a[j+1]){
                        third_con++;
                    }
                }
            }
        if(third_con>=N-1){
            for(int i=0;i<N-1;i++){
                int temp=a[N-1];
                // sort from index 1 to end 
                a[0]=temp;
            }
        }
        }
       }       
      
    }
  
    return 0;
}