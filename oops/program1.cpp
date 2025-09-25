//  Write a function called power() that takes two arguments: a double value for n and an
// int value for p, and return the result as double value. Use default argument of 2 for p,
// so that if this argument is omitted the number will be squared. Write a main() function
// that gets values from the user to test this function.

#include <iostream>
using namespace std;

double power(double n, int p = 2)
{
    double j = 1;
    for (int i = 0; i < p; i++)
    {
        j *= n;
    }
    return j;
}

int main()
{

    int p;
    double n;
    cout << "enter the value whose power you want to calculate " << endl;
    cin >> n;
    cout << "How much power do you want to find " << endl;
    cin >> p;

    cout << n << " power " << p << " is " << power(n, p) << endl;

    return 0;
}