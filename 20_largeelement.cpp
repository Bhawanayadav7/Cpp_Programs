#include <iostream>
using namespace std;

int main()
{
    int n, largest;
    int num[10];

    cout << "Enter 10 Array Elements: ";

    for (int i = 0; i < 10; i++)
    {
        cin >> num[i];
    }

    largest = num[0];
    for (int i = 1; i < 10; i++)
    {
        if (largest < num[i])
            largest = num[i];
    }
    cout << "Largest element in array is: " << largest;
    return 0;
}