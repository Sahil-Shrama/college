
#include <iostream>
using namespace std;

int top = -1,full_size = 3;

struct stk{
int key;
};

void push(stk arr[3]){
   if(top>full_size-1){
    cout<<"sorry stack is full "<<endl;

   } 
   else 
   {
    int key ;
    cout<<"enter the value you want to add "<<endl;
    cin>>key;
   arr[++top].key =key;


}
   
}

// void pop(stk arr[3]){
//     if(top==-1){
//         cout<<"sorry stack is elemty"<<endl;
//     }
//     else{
//         cout<<" deleted "<<arr[top].key;
//         top--;
//     }

// }


void show(stk arr[3]){
    for (int i = 0; i < top; i++)
    {
       cout<<" "<<arr[i].key;
    }
    
}

int main(){
    stk arr[3];
    push(arr);
    push(arr);
    push(arr);
    push(arr);
    push(arr);
    show(arr);
    // pop(arr);
    // pop(arr);
    // pop(arr);
    // pop(arr);
    // pop(arr);
    // pop(arr);
    // pop(arr);
    

}