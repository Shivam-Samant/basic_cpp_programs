#include <iostream>

using namespace std;

int n=100;
int a[100];
int f=-1;  // front
int r=-1;  // back

void push(int v){
   if(r==n-1){
      cout<<"Queue overflow\n";
   }
   else{
      if(f==-1) {f=0;}  
         r++;
         a[r]=v;
      }
   }

void pop(){
   if(f==-1||f>r){ 
      cout<<"Queue underflow\n";
      //return;
   }
   else{
      cout<<"deleted element in queue is: "<<a[f]<<"\n";
      f++;  
   }
}

void display(){
   if(f==-1){
      cout<<"Queue is empty\n";
   }
   for(int i=f;i<=r;i++){
      cout<<a[i]<<" ";
   }
}

int main(){
   int ch,v;
   cout<<"1 for pushing element\n";
   cout<<"2 for popping element\n";
   cout<<"3 for displaying element\n";
   cout<<"4 for exit\n";
   do{
      cout<<"Enter the choice: ";
      cin>>ch;
      switch(ch){
         case 1:{
            cin>>v;
            push(v);
            break;
         }
         case 2:{
            pop();
            break;
         }
         case 3:{
            display();
            break;
         }
         case 4:{
            cout<<"Exit"<<"\n";
            break;
         }
         default:{
            cout<<"Invalid option";
            break;
         }
      }
   }while(ch!=4);
   return 0;
}