#include <iostream>
using namespace std;

int main()
{
    int i, fact = 1, x;
    cout << "Enter any Number: ";
    cin >> x;
    for (i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    cout << "Factorial of " << x << " is: " << fact << endl;
    return 0;
}