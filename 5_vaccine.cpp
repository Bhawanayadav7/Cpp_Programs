#include <iostream>
using namespace std;

int main()
{
    signed long num1 = 0;
	cout << " Enter your Age : ";
    cin >> num1;
    if(num1 >= 60)
    {
        cout << " Eligible for vaccination with highest priority\n\n";
    }
    else if(num1 >= 18 and num1<60){
        cout << "Eligible for vaccination with least priority\n\n";
    }
    else if(num1<18){
        cout << "minor not eligible\n\n";
    }
    else
    {
        cout << "Wrong Input";
    }
    return 0;
}