// Define a class Dist with int feet and float inches. Define member function that 
// displays distance 1'-2.5'' format.
// (1 feet = 12 inches 
// ' for feet " for inches) 
// Also define member function scale() function that
// scale simply means multiplication 
// takes object by refrence (simply add & ) and scale factor in float as an input argument. The function 
// will scale the distance accordingly, For example, 20'-5.5'' and scale factor is 0.5 then 
// answer is 10'-2.75''. 

#include <iostream>
using namespace std;
class Dist{

    int feet;
    float inches;
    float sf;
public:
    void input(){
    
    cout<<"Enter feet: ";
    cin>>feet;
    float i;
    cout<<"Enter inches: ";
    cin>>inches;
    cout<<"Enter scale factor: ";
    
    cin>>sf;
       
    }
    void display_distace(){


               int inch=0;
        float dec=0.0;
        if(inches>=12){
            inch=(int)inches;
            dec=inches-inch;

            inches=inch%12 + dec;
            feet=feet+ inch/12;
        } 

        cout<<"feet & Inches: "<<feet<<"'- "<<inches<<"\"";
    }
    void scale(Dist& ob){
        ob.feet=ob.feet * sf;
        ob.inches=ob.inches * sf;
        int inch=0;
        float dec=0.0;
        if(inches>=12){
            inch=(int)inches;//66
            dec=inches-inch;//0.2

            ob.inches=inch%12 + dec;
            ob.feet=ob.feet+ inch/12;
        }
        cout<<"After Scaling "<<endl;
        ob.display_distace();        
    }    
};
int main(){
    Dist ob;
    ob.input();
    ob.display_distace();
    ob.scale(ob);
    
    
}    