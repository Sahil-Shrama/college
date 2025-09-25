// Write a function that returns the unit digit of a number. Write a main() function that
// take the type int input from the user to test this function
#include <iostream>
using namespace std;

int LastDigit(int num)
{

    return num % 10;
}

int main()
{

    cout << "Enter an integer number" << endl;
    int num;
    cin >> num;
    cout << "Last digit of the number is " << LastDigit(num) << endl;
    return 0;
}