#include <iostream>
using namespace std;

int main()
{
    int arr[6], i, Sum = 0;
    cout << "Enter 6 numbers: ";

    for (i = 0; i < 6; i++)
        cin >> arr[i];
    cout << "List of Odd Numbers are: ";

    for (i = 0; i < 6; i++)
    {
        if (arr[i] % 2 != 0)
        {
            cout << arr[i] << " ";
            Sum = Sum + arr[i];
        }
    }
    cout << endl;
    cout << "The sum of odd numbers are: " << Sum;
    return 0;
}