// Write a function to check whether the number is prime or not. Write a main() function
// that take the type int input from the user to test this function.

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the no for checking " << endl;
    int input;
    bool is_prime = true;
    cin >> input;
    if (input < 0)
    {
        cout << "A Negative Number Can't be a prime number " << endl;
    }
    else if (input == 0)
    {
        cout << "0 can't be a prime number " << endl;
    }
    else if (input == 1)
    {
        cout << "1 is not a prime " << endl;
    }
    else
    {
        for (int i = 2; i <= input / 2; i++)
        {
            if (input % i == 0)
            {
                cout << input << " is not a prime number " << endl;
                return 0;
            }
            else
            {
                cout << input << " is a prime number" << endl;
                return 0;
            }
        }
    }
    return 0;
}