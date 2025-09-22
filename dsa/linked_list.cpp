#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *next;//self refrencing pointer
};

void print(struct node * ptr ){
 
while(ptr!=NULL){
    cout<<" "<<ptr->data;
    ptr = ptr->next;  

}

}

struct node * insert_big(struct node* ptr){
struct node *big = (struct node*)malloc(sizeof(struct node));
big->data =12;
big->next = ptr;


return big ;
}

int main(){
struct node * head = (struct node *)malloc(sizeof(struct node));
head->data = 9;
struct node *second = (struct node *)malloc(sizeof(struct node));
second->data = 4;
head->next= second;

struct node *third = (struct node *)malloc(sizeof(struct node));
third->data = 3;
second->next= third;

third->next = NULL;


print(head);

 head = insert_big(head);
print(head);
return 0;    
}
