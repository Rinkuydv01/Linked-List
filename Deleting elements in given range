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
    newnode->next=NULL;
    if(*head==NULL){
        *head=newnode;
    }else{
        struct node* last=*head;
        while(last->next!=NULL){
            last=last->next;
        }
        last->next=newnode;
    }
}

void dlt(struct node** head,int s,int e){
    if(*head==NULL || s>e){
        return;
    }
    struct node* pre=nullptr;
    struct node* curr=*head;
    
    for(int i=1;i<s && curr!=nullptr;i++){
        pre=curr;
        curr=curr->next;
        
    }
    struct node* temp=curr;
    for(int i=s;i<=e;i++){
        temp=temp->next;
    }
    if(pre!=nullptr){
    pre->next=temp;
    }else{
        *head=temp;
    }
}
void print(struct node* head){
    struct node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main() {
    struct node* head=NULL;
    int n,element;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>element;
        insert(&head,element);
    }
    int s,e;
    cin>>s>>e;
    print(head);
    dlt(&head,s,e);
    cout<<endl<<endl;
    print(head);
}
