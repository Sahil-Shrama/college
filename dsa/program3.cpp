#include <iostream>
using namespace std;

struct node {
    int data;
    struct node *next;
};


int count(struct node *ptr){
    
//    struct node *tenp= (struct node*)malloc(sizeof(struct node));;
//    tenp->next = ptr;
   int i =0;
    while(ptr!=NULL){
        i++;
        ptr = ptr->next;
    }
    // free(tenp);
    return i;

}

struct node*insert_big(struct node*ptr,int data){
struct node * temp = (struct node*)malloc(sizeof(struct node));
temp->data = data;
temp->next = ptr;
return temp;

}

void insert_at_any(struct node*ptr,int total,int inpu){
 int val =2;
//  cout<<"which position do you want to insert "<<endl;
//  cin>>val;
 for(int i =1;i<val-1;i++){
    ptr = ptr->next;
 }
 struct node *temp = (struct node*)malloc(sizeof(struct node));
 temp->data=inpu;
 temp->next = ptr->next;
 ptr->next = temp; 
   
}


void insert_at_end(struct node*ptr,int data ){
    while(ptr->next!=NULL){
     ptr = ptr->next;       

    }
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    ptr->next = temp;
    temp->next = NULL;


}

void print(struct node* ptr){
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;

    }
    cout<<endl;
}

struct node * deleteAtBig(struct node* ptr){
    struct node * temp;
    temp = ptr->next;
    
    return temp;

}

void deleteAtAny(struct node * ptr,int pos){
struct node  * temp ;
struct node * temp2;
for(int i =1;i<pos-2;i++){
    cout<<"hello"<<endl;
    ptr = ptr->next;
}
temp = ptr->next;
cout<<ptr->data<<endl;
cout<<temp->data<<endl;
temp2 = temp->next;
cout<<temp2->data<<endl;
ptr->next = temp2;

}

void delete_at_end(struct node* ptr,int count){
for(int i =1;i<count-1;i++){
    ptr = ptr->next;
}
ptr->next =NULL;
}

struct node* reverse(int val,struct node * ptr){
    struct node *prev = NULL;
    struct node *current=ptr;struct node *next = NULL;
while(current!=NULL){
    next = current->next;
    current->next = prev;
    prev= current;
    current = next;



}
return prev;

}


int main(){
  
  struct  node * head = NULL;
  head = (struct node*)malloc(sizeof(struct node));
  head->data = 13;
  struct node * second = (struct node*)malloc(sizeof(struct node));
  second->data =1;
  head->next= second;
  struct node * third = (struct node*)malloc(sizeof(struct node));
  third->data = 13;
  second->next = third;
  node * forth = (struct node*)malloc(sizeof(struct node));
  forth->data =87;
  third->next= forth;
  forth->next = NULL;
  
  //counting the element
  int val = count(head);
  cout<<"total no of element "<<val<<endl;
//insertion operation

//insert at big 

head = insert_big(head,99);

     val = count(head);
  cout<<"total no of element "<<val<<endl;

//insert at any position
insert_at_any(head,val,5);
    val = count(head);
  cout<<"total no of element "<<val<<endl;
  print(head);
  insert_at_end(head,11);
  print(head);
head = deleteAtBig(head);
print(head);
val = count(head);
delete_at_end(head,val);
print(head);
val = count(head);
deleteAtAny(head,2);
print(head);
val = count(head);
head =reverse(val,head); 
print(head);
}