// Define class Digit having int ‘n’ as data member. Define member function enter() to 
// enter the data and show() to print the data. A class has member function compare() 
// that displays whether the first object is smaller, greater or same as compared to 
// second object. (Function compare() should support: int x = d1.compare(d2); where d1 
// and d2 are object of class Digit). Use Concept of Object as Function Arguments.

#include <iostream>
using namespace std;

class Digit{
int n;
public:
void enter(){
    cout<<endl;
    cout<<"Enter the number "<<endl;
    cin>>n;
}
void show(){
    cout<<" "<<n;
}

int compare(Digit obj){
    cout<<endl;
if(n>obj.n){
    return 1;
}
else if(n==obj.n){
    return 0;
}

else{
    return 2;
}

}
//0==eual
//1 first obj is greater
//2 second object is greater
};
int main(){

Digit obj1,obj2;
obj1.enter();
obj1.show();
obj2.enter();
obj2.show();

int num = obj1.compare(obj2);
cout<<"num"<<num<<endl;
if(num==0){
    obj1.show();
    cout<<" and ";
    obj2.show();
    cout<<" are equal "<<endl;

}
else if(num==1){
obj1.show();
cout<<" is greter tham  ";
obj2.show();
cout<<endl;
}
else{
 obj1.show();
 cout<<" is smaller tham  ";
 obj2.show();cout<<endl;   
}
    return 0;
}