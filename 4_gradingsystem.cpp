#include <iostream>
using namespace std;

int main()
{
    signed long num1 = 0;
	cout << " Enter your marks : ";
    cin >> num1;
    if(num1 >= 80)
    {
        cout << " Grade A\n\n";
    }
    else if(num1 >= 60 and num1<80){
        cout << " Grade B\n\n";
    }
    else if(num1 >= 50 and num1<60){
        cout << " Grade C\n\n";
    }
    else if(num1 >= 45 and num1<50){
        cout << " Grade D\n\n";
    }
    else if(num1 >= 25 and num1<45){
        cout << " Grade E\n\n";
    }
    else
    {
        cout << "F";
    }
    return 0;
}