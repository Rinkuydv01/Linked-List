// #include <bits/stdc++.h>
// using namespace std;

// struct node{
//     int data;
//     struct node* next;
// };

// void insert(struct node** head,int element){
//     struct node* newnode=(struct node*)malloc(sizeof(struct node));
//     newnode->data=element;
//     newnode->next=nullptr;
//     if(*head==nullptr){
//         *head=newnode;
//         return;
//     }else{
//         struct node* last=*head;
//         while(last->next!=nullptr){
//             last=last->next;
//         }
//         last->next=newnode;
//     }
// }
// void deletebyelement(struct node**head, int element){
//     struct node* temp=*head;
//     if(temp->data==element){
//         *head=temp->next;
//         return;
//     }else{
//         struct node* pre=nullptr;
//         for(int i=1; temp->data!=element && temp->next!=nullptr;i++){
//             pre=temp;
//             temp=temp->next;
//             if(temp->data==element){
//                 pre->next=temp->next;
//                 temp=pre;
//                 return;
//             }
//         }
//         return;
//     }
//     return;
// }

// void deletebypos(struct node** head, int pos){
//     struct node* temp=*head;
//     if(pos==1){
//         *head=(*head)->next;
//         return;
//     }
//     else{
//         for(int i=1;i<pos-1;i++){
//             temp=temp->next;
//         }
//         temp->next=temp->next->next;
//     }
// }

// void insertatbeginning(struct node** head,int element){
//     struct node* newnode=(struct node*)malloc(sizeof(struct node));
//     newnode->data=element;
//     newnode->next=*head;
//     *head=newnode;
// }
// struct node* reverse(struct node** head){
//     struct node* pre=nullptr;
//     struct node* curr=*head;
//     struct node* forward=nullptr;
    
//     while(curr!=nullptr){
//         forward=curr->next;
//         curr->next=pre;
//         pre=curr;
//         curr=forward;
//     }
//     return pre;
// }

// struct node* merge(struct node** head1, struct node** head2){
//     struct node* l1=*head1;
//     struct node* l2=*head2;
    
//     struct node* dummy=(struct node*)malloc(sizeof(struct node));
//     dummy->next=nullptr;
//     struct node* tail=dummy;
    
//     while(l1!=nullptr && l2!=nullptr){
//         tail->next=l1;
//         l1=l1->next;
//         tail=tail->next;
        
//         tail->next=l2;
//         l2=l2->next;
//         tail=tail->next;
//     }
    
//     while(l1!=nullptr){
//         tail->next=l1;
//         l1=l1->next;
//         tail=tail->next;
//     }
//     while(l2!=nullptr){
//         tail->next=l2;
//         l2=l2->next;
//         tail=tail->next;
//     }
//     struct node* merged_node=dummy->next;
//     return merged_node;
   
// }

// void print(struct node* head){
//     struct node* temp=head;
//     while(temp!=nullptr){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
// }

// void insertatpos(struct node** head,int element, int pos){
//     struct node* newnode=(struct node*)malloc(sizeof(struct node));
//     newnode->data=element;
//     newnode->next=nullptr;
//     struct node* temp=*head;
//     for(int i=1;i<pos-1;i++){
//         temp=temp->next;
        
//     }
//     newnode->next=temp->next;
//     temp->next=newnode;
// }

// int main() {
//   struct node* head=nullptr;
//   int n,element;
  
//   cin>>n;
//   for(int i=0;i<n;i++){
//       cin>>element;
//       insert(&head,element);
//   }
//   //insertatbeginning(&head,23);
// //   insertatpos(&head,5,2);
//     //deletebypos(&head,9);
//     deletebyelement(&head,11);
//   print(head);
// //   struct node* headd=reverse(&head);
// //   print(headd);
// }

