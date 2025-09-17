#include <iostream>
using namespace std;
struct weight
{
    float kilogram;
    float gram;
    // public:
    void get_value(){
        cout<<"enter the value in kilogram "<<endl;
        cin>>kilogram;
        gram = kilogram*1000;

    }

    void show_value(){
        cout<<"value in kilogram is "<<kilogram<<endl;
        cout<<"value in gram is "<<gram<<endl;

    }
    
};



int main(){
   weight w1;
   w1.get_value();
   w1.show_value();


    return 0 ;

}