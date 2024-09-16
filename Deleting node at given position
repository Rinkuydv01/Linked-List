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
void dlt(struct node** head, int pos){
    struct node* temp=*head;
    if(*head==nullptr || (*head)->next==nullptr){
        return;
    }
    if(pos==1){
        temp->next=temp->next->next;
        return;
    }
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    if(temp->next==nullptr ||temp==nullptr){
        return;
    }
    temp->next=temp->next->next;
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
    dlt(&head,5);
    print(head);
    
    
}
