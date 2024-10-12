// #include <iostream>
// using namespace std;

// void insert(int n,int arr[],int num, int index){
//   for(int i=n-1;i>=index;i--){
//     arr[i+1]=arr[i];
//   }
//   arr[index]=num;
//   n++;
//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//   }
// }

// void dlt(int n,int arr[],int index){
//   for(int i=index;i<n;i++){
//     arr[i]=arr[i+1];
//   }
//   n--;
//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//   }
// }

// void search(int n,int arr[],int num){
//   bool flag=false;
//   for(int i=0;i<n;i++){
//     if(arr[i]==num){
//       cout<<"Index of number is "<<i;
//       flag=true;
//       break;
//     }
//   }
//   if(flag==false){
//     cout<<"number not found";
//   }
// }

// int main() {
//   char o;
//   cout<<"Enter I for insert, S for search, D for delete: ";
//   cin>>o;
  
//   cout<<"Enter size: ";
//   int n;
//   cin>>n;
//   int arr[n];
//   cout<<"Enter Element: ";
//   for(int i=0;i<n;i++){
//     cin>>arr[i];
//   }
//   if(o=='I'){
//     cout<<"enter number: ";
//     int num;
//     cin>>num;
//     cout<<"Enter index: ";
//     int index;
//     cin>>index;

//     insert(n,arr,num,index);
//   }else if(o=='D'){
//     cout<<"Enter index: ";
//     int index;
//     cin>>index;

//     dlt(n,arr,index);
//   }else if(o=='S'){
//     cout<<"enter number: ";
//     int num;
//     cin>>num;
//     search(n,arr,num);
    
//   }
  
 
// }


//LINKED LIST BASICS
// #include <bits/stdc++.h>
// using namespace std;

// struct node{
//   int data;
//   struct node* next;
// };

// int main() {
//   struct node *head;
//   struct node *two;
//   struct node  *three;
//   struct node *fourth;

//   head=(struct node *)malloc(sizeof(struct node));
//   two=(struct node *)malloc(sizeof(struct node));
//   three=(struct node *)malloc(sizeof(struct node));
//   fourth=(struct node *)malloc(sizeof(struct node));

//   head->data=5;
//   head->next=two;
//   two->data=7;
//   two->next=three;
//   three->data=9;
//   three->next=fourth;
//   fourth->data=11;
//   fourth->next=NULL;

//   while(head!=NULL){
//     cout<<head->data<<" ";
//     head=head->next;
//   }
// }

// #include <bits/stdc++.h>
// using namespace std;

// struct node{
//   int data;
//   struct node *next;
// };
// int main() {
//   struct node *head;
//   struct node *two;
//   struct node *third;
//   struct node *fourth;
//   struct node *fifth;

//   head= (struct node *)malloc(sizeof(struct node));
//   two=(struct node *)malloc(sizeof(struct node));
//   third=(struct node *)malloc(sizeof(struct node));
//   fourth=(struct node *)malloc(sizeof(struct node));
//   fifth=(struct node *)malloc(sizeof(struct node));

//   head->data=1;
//   head->next=two;
//   two->data=2;
//   two->next=third;
//   third->data=3;
//   third->next=fourth;
//   fourth->data=4;
//   fourth->next=fifth;
//   fifth->data=5;
//   fifth->next=NULL;

//   struct node *ptr=head;
//   while(ptr!=NULL){
//     cout<<ptr->data<<" ";
//     ptr=ptr->next;
//   }

// }


// #include <bits/stdc++.h>
// using namespace std;

// struct node{
// int data;
// struct node *next;
// };

// int main() {
//   struct node *head;
//   struct node *second;
//   struct node *third;
//   struct node *fourth;

//   head = (struct node *)malloc(sizeof(struct node));
//   second=(struct node *)malloc(sizeof(struct node));
//   third=(struct node *)malloc(sizeof(struct node));
//   fourth=(struct node *)malloc(sizeof(struct node));

//   head->data=1;
//   head->next=second;
//   second->data=2;
//   second->next=third;
//   third->data=3;
//   third->next=fourth;
//   fourth->data=4;
//   fourth->next=NULL;

//   struct node *ptr=head;
//   while(ptr!=NULL){
//     cout<<ptr->data<<" ";
//     ptr=ptr->next;
//   }
// }

// #include <bits/stdc++.h>
// using namespace std;

// struct node {
// int data;
// struct node* next;
// };
// void create(node* head,int value)
// {
//   node* newnode = new node;
//   newnode->data = value;
//   if(head==nullptr){
//     head=newnode;
//   }
//   node* temp = head;
//   while(temp->next!=nullptr){
//     temp=temp->next;
//   }
//   temp->next=newnode;
  
// }
// void display(node* head){
//   node* temp = head->next;
//   while(temp!=nullptr){
//     cout<<temp->data<<" ";
//     temp=temp->next;
//   }
  
// }
// int main() {
//   node* head=new node;
//   head->next = nullptr;
// int n;
//   cin>>n;
//   int v;
//   for(int i=0;i<n;i++){
//     cin >> v;
//     create(head,v);
//   }
// display(head);

// }


// #include <bits/stdc++.h>
// using namespace std;

// struct node{
// int data;
// struct node *next;
// };

// void insert(struct node **head,int element){
//   struct node *newnode=(struct node *)malloc(sizeof(struct node));

//   newnode->data=element;
//   newnode->next=*head;
//   *head=newnode;
// }
// int main() {
//   struct node *head=nullptr;
//   int n;
//   int element;
//   cin>>n;

//   for(int i=0;i<n;i++){
//     cin>>element;
//     insert(&head,element);
//   }
//   struct node *temp=head;
//   for(int i=0;i<n;i++){
//     cout<<temp->data<<" ";
//     temp=temp->next;
//   }
// }





// #include <bits/stdc++.h>
// using namespace std;

// struct node{
//   int data;
//   struct node* next;
// };

// void insert(struct node **head,int element){
//   struct node*newnode=(struct node*)malloc(sizeof(struct node));

//   newnode->data=element;
//   newnode->next=*head;
//   *head=newnode;
// }

// void printlist(struct node *head){
//   struct node *temp=head;
//   while(temp!=nullptr){
//     cout<<temp->data<<" ";
//     temp=temp->next;
// }
// }

// int main() {
//   struct node *head=nullptr;
//   int n;
//   int element;
//   cin>>n;

//   for(int i=0;i<n;i++){
//     cin>>element;
//     insert(&head, element);
//   }
//     printlist(head);
  
// }


//////////////insert at beginning//////////////////
// #include <bits/stdc++.h>
// using namespace std;

// struct node{
// int data;
// struct node *next;
// };

// void insert(struct node **head,int element){
//   struct node *newnode=(struct node *)malloc(sizeof (struct node));
//   newnode->data=element;
//   newnode->next=*head;
//   *head=newnode;
// }
// int main() {
//   struct node *head=nullptr;

//   int n;
//   int element;
//   cin>>n;
//   for(int i=0;i<n;i++){
//     cin>>element;
//     insert(&head,element);
//   }

//   struct node *temp=head;
//   while(temp!=nullptr){
//     cout<<temp->data<<" ";
//     temp=temp->next;
//   }
  
// }




////////////insert at end//////////////////

// #include <bits/stdc++.h>
// using namespace std;

// struct node{
// int data;
// struct node* next;
// };

// void insert(struct node**head,int element){
//   struct node* newnode=(struct node*)malloc(sizeof (struct node));

//   newnode->data=element;
//   newnode->next=nullptr;
//   if(*head==nullptr){
//     *head=newnode;
//     return;
//   }else{
//    struct node* last=*head;
//     while(last->next!=nullptr){
//       last=last->next;
//     }
//     last->next=newnode;
//   }
// }
// int main() {

//   struct node* head=nullptr;
//   int n;
//   int element;
//   cin>>n;
//   for(int i=0;i<n;i++){
//     cin>>element;
//     insert(&head,element);
//   }

//   struct node *temp=head;
//   while(temp!=nullptr){
//     cout<<temp->data<<" ";
//     temp=temp->next;
//   }
// }


// #include <bits/stdc++.h>
// using namespace std;

// struct node{
// int data;
// struct node *next;
// };
// void insert(struct node** head,int element){
//   struct node* newnode=(struct node*)malloc(sizeof (struct node));
//   newnode->data=element;
//   newnode->next=nullptr;

//   if(*head==nullptr){
//     *head=newnode;
//     return;
//   }else{
//     struct node* last=*head;
//     while(last->next!=nullptr){
//       last=last->next;
//     }
//     last->next=newnode;
//   }
// }

// int main() {
//   struct node* head=nullptr;
//   int n,element;

//   cin>>n;
//   for(int i=0;i<n;i++){
//     cin>>element;
//     insert(&head,element);
//   }
// }

// #include <bits/stdc++.h>
// using namespace std;

// struct node{
// int data;
// struct node* next;
// };

// void insert(struct node** head,int element){
//   struct node* newnode=(struct node*)malloc(sizeof( struct node));
//   newnode->data=element;
//   newnode->next=nullptr;

//   if(*head==nullptr){
//     *head=newnode;
//     return;
    
//   }else{
//     struct node* last=*head;
//     while(last->next!=nullptr){
//       last=last->next;
//     }
//     last->next=newnode;
//   }
// }
// int main() {
//   struct node* head=nullptr;
//   int n,element;
//   cin>>n;
//   for(int i=0;i<n;i++){
//     cin>>element;
//     insert(&head,element);
//   }
//   struct node* temp=head;
//   while(temp!=nullptr){
//     cout<<temp->data<<" ";
//     temp=temp->next;
//   }
// }

// #include <bits/stdc++.h>
// using namespace std;

// struct node{
// int data;
// struct node* next;
// };
// void insert(struct node** head,int element){
//   struct node* newnode=(struct node*)malloc(sizeof (struct node));

//   newnode->data=element;
//   newnode->next=nullptr;

//   if(*head==nullptr){
//     *head=newnode;
//     return;
//   }else{
//     struct node* last=*head;
//     while(last->next!=nullptr){
//       last=last->next;
//     }
//     last->next=newnode;
//   }
// }
// int main() {
//   struct node* head=nullptr;
//   int n,element;
//   cin>>n;
//   for(int i=0;i<n;i++){
//     cin>>element;
//     insert(&head,element);
//   }
//   struct node* temp=head;
//   for(int i=0;i<n;i++){
//     cout<<temp->data<<" ";
//     temp=temp->next;
//   }
// }


///////////insert at specific postion //////////////
void insertAtPosition(node** head_ref, int new_data, int position) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = new_data;

    struct node* temp = *head_ref;
    for (int i = 1; temp != nullptr && i < position - 1; i++) {
        temp = temp->next;
    }

    if (temp != nullptr) { 
        newnode->next = temp->next;
        temp->next = newnode;
    }
}
