// Create a c++ class Weight having private data members: float kg, grams. A member
// funtion setvalue() should enter their values. Another member function showvalue()
// should display their values. Define both functions inside the class. Member function
// defined inside the class behaves like an inline function. illustrate the difference
// between c++ structure and c++ class.

#include <iostream>
using namespace std;

class weight
{
    float kilogram, gram;
    // by default they are private
public: // use this to make public
    void setValue()
    {
        cout << "enter the value in kilogram " << endl;
        cin >> kilogram;
        gram = kilogram * 1000;
    }

    void show_value()
    {
        cout << "value in kilogram is " << kilogram << endl;
        cout << "value in gram is " << gram << endl;
    }
};

int main()
{
    weight obj1, obj2;
    obj1.setValue();
    obj1.show_value();
    obj2.setValue();
    obj2.show_value();

    return 0;
}