#include<iostream>

using namespace std;

class node{
    public:
    int data;
    node*next;
    node(int dat){
        this->data=dat;
        next=NULL;
    }
};
int main(){
    
    // statically
    node n1(1);
    node*head = &n1;
    node n2(2);
    n1.next = &n2;
    // cout<<head->data;
    node*n3=new node(10);
    n2.next=n3;
    node *n4=new node(20);
    n3->next=n4;
    cout<<head->next->next->next->data;
    return 0;
}