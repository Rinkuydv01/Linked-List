// You are using GCC
#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* next;
};
void insert(struct node** head,int element){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=element;
    newnode->next=nullptr;
    if(*head==nullptr){
        *head=newnode;
    }else{
        struct node* last=*head;
        while(last->next!=nullptr){
            last=last->next;
        }
        last->next=newnode;
    }
}

void print(struct node* head){
    struct node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
struct node* reverse(struct node** head){
    struct node* pre=nullptr;
    struct node* current=*head;
    struct node* forward=nullptr;
    
    while(current!=nullptr){
        forward=current->next;
        current->next=pre;
        pre=current;
        current=forward;
    }
    return pre;
}
   

int main() {
    struct node* head=nullptr;
    int n,element;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>element;
        insert(&head,element);
    }
    print(head);
    struct node* headd=reverse(&head);
    print(headd);
    
    
}
