#include <iostream>
using namespace std;

int main()
{
   int arr[5], i, sum = 0;
   cout << "Enter 5 Array Elements: ";

   for (i = 0; i < 5; i++)
      cin >> arr[i];
   for (i = 0; i < 5; i++)
      sum = sum + arr[i];

   cout << "Sum of all array elements = " << sum;
   cout << endl;

   int avg = sum / 5;
   cout << "Average of all array elements = " << avg;
   return 0;
}