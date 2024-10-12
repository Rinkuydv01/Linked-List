#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* pre;
    struct node* next;
};

void insert(struct node** head,int element){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=element;
    newnode->next=nullptr;
    newnode->pre=nullptr;
    if(*head==nullptr){
        *head=newnode;
    }
    else{
        struct node* last=*head;
        while(last->next!=nullptr){
            last=last->next;
        }
        last->next=newnode;
        newnode->pre=last;
    }
}
void print(struct node* head){
    struct node* temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    //temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->pre;
    }
    cout<<endl;
}

int main(){
    struct node* head=nullptr;
    int n,element;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>element;
        insert(&head,element);
    }
    print(head);
}
