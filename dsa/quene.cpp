#include <iostream>
using namespace std;

struct qu{
int key ;

};

int rear = -1, front = -1,max =3;
int check(){
    if(rear == front ){
    cout<<"quene is empty "<<endl;
    return -1;
    }
    return 0;
}

int full(){
  if(rear == (max-1) ){
    cout<<"quene is empty "<<endl;

    return -1;
    }
    return 0;
}

int add(){
rear++;

}

int delete(){

}
int main(){

    return 0 ;
}