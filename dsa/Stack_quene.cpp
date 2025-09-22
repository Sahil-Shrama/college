#include <iostream>
using namespace std;

struct element{
    int key;
};



int top =-1,max_size =10;



bool emp(){
if(top==-1){
    return true;
}
else
 return false;
}



bool is_full(){
       cout<<endl;
    cout<<top;
    cout<<endl;
if (top == (max_size-1)){
 
    return true;
}
else 
 return false;

}




void push(element arr[10]){
  cout<<"enter the element for pushing  in array "<<endl;
    int val;
    cin>>val;
    arr[++top].key = val;

  

}



void pop(element arr[10]){


   
    cout<<"deleted "<< arr[top].key<<endl;
  top--;
 
}



void print(element arr[10]){

 
 
cout<<"primting all the element of Stack"<<endl;

for(int i =0;i<top;i++){
   cout<<arr[i].key<<" "; 

 }   

}

int main(){
element stack[10];
int a;
do {
cout<<"enter the no of operation you want to do "<<endl;
cout<<"1 push operation "<<endl;
cout<<"2. pop operation "<<endl;
cout<<"3. show the stact "<<endl;
cout<<"4 check if empty"<<endl;
cout<<"5 if empty"<<endl;
cout<<"-1 for exit"<<endl;
int cas;
cin>>cas;
   switch (cas)
   {

   case 1:
push(element);
    
    break;
   case 2:
   pop(stack);
    break;


   case 3 :
    print(stack);
    break;
    case -1:
    a= -1;
    break;

   default:
   cout<<"enter valid input"<<endl;
    break;
   }
}while(a!=-1);

    return 0;
}