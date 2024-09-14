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
        return;
    }else{
        struct node* last =*head;
        while(last->next!=nullptr){
            last=last->next;
        }
        last->next=newnode;
    }
}

void even(struct node**head){
    if(*head==nullptr || (*head)->next==NULL){
        return;
    }
    struct node* temp=*head;
    while(temp!=NULL && temp->next!=NULL){
        struct node* current=NULL;
        current=temp->next;
        temp->next=temp->next->next;
        free(current);
        temp=temp->next;
        
    }
}

int main() {
    struct node* head=nullptr;
    int n;
    cin>>n;
    int element;
    for(int i=0;i<n;i++){
        cin>>element;
        insert(&head,element);
    }
    
    struct node* t=head;
    while(t!=nullptr){
        cout<<t->data<<" ";
        t=t->next;
    }
    even(&head);
    cout<<endl<<endl;
    struct node* tem=head;
    while(tem!=NULL){
        cout<<tem->data<<" ";
        tem=tem->next;
    }
    
    
}
