#include <iostream>
using namespace std;

struct circular_que{
    int key;
};
int rear = -1; int front = -1,max_Size = 3;

void add(circular_que arr[3],int val){


if((rear+1)%max_Size == front){
    cout<<"stack is full"<<endl;
    return;
 
}


if(front == -1){
    front = 0;
}
else{
    
    rear = (rear+1)%max_Size;
arr[rear].key = val;


}


}

void del(circular_que arr[3]){
    if(front == -1 ){
        cout<<"stack is empty "<<endl;
        return;
    }
int data = arr[front].key;

if(front==rear){
    front =rear=-1;
}

  else{


        front = (front+1)%max_Size;      
        cout<<" "<<data<<" deleted "<<endl;
        
    
  }
    

}

void print(circular_que arr[3]){
    cout<<"rear "<<rear<<"front "<<front<<endl;
    for(int i =front;i<rear;i++){
        cout<<" "<<arr[i].key<<endl;
    }
}


int main(){
circular_que que[3] ;

del(que);
add(que,12);
add(que,13);
add(que,1);
add(que,7);
add(que,9);
del(que);




print(que);
    return 0;
}