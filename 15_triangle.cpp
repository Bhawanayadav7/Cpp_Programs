#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int c;

    cout << "Enter three angles of the triangle" << endl;
    cin >> a >> b >> c;

    int sum = a + b + c;

    if (sum == 180 && a != 0 && b != 0 && c != 0)
    {
        cout << "It is a valid triangle" << endl;
    }
    else
    {
        cout << "It is not a valid triangle" << endl;
    }
    return 0;
}