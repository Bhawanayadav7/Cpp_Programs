#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter any number: ";
    cin >> x;

    if (x % 7 == 0)
        cout << x << " is a multiple of 7\n";

    else if (x % 3 == 0)
        cout << x << " is a multiple of 3\n";

    else
        cout << x << " False\n";

    return 0;
}