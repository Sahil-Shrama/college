/*Write a C++ program having class Dist with private data member int feet and 
float inches. Define following public member functions for it. 
1) getdata() to take feet and inches as input 
2) putdata() to display distance in 1'2.5" format 
3) add() to do addition of two distances 
such that it can handle function call d1.add(d2) where d1, d2 and d3 
are objects of class. Use Concept of Object as Function Arguments.*/

#include <iostream>
using namespace std;
class Dist{
private:
    int feet;
    float inches;
public:
    void putdata(){
        cout<<"feet & Inches: "<<feet<<"' "<<inches<<"\"";
    }
    void getdata(){
        // int feet;
        cout<<"Enter feet :";
        cin>>feet;
        // float inches;
        cout<<"Enter inches :";
        cin>>inches;
    }
    void add(Dist ob){

        feet=feet+ob.feet;
        inches=inches+ob.inches;
        int inch=0;
        float dec=0.0;
        if(inches>=12){
            inch=(int)inches;
            dec=inches-inch;
            inches=inch%12 + dec;
            feet=feet+ inch/12;
        }
    }    
};
int main(){
    Dist d1,d2;
    d1.getdata();
    d2.getdata();
    d1.add(d2);
    d1.putdata();
}    

