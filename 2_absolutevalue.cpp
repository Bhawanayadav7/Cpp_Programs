#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter any number:";
    cin >> x;

    if (x > 0)
        cout << "The absolute value of no. is: " << x;
    else
        cout << "The absolute value of no. is: " << -(x);

    return 0;
}