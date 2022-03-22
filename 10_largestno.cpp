#include <iostream>
using namespace std;

int main() {    
    float x, y, z;

    cout << "Enter three numbers: ";
    cin >> x >> y >> z;

    if(x >= y && x >= z)
        cout << "Largest number is : " << x;

    if(y >= x && y >= z)
        cout << "Largest number is : " << y;
    
    if(z >= x && z >= y)
        cout << "Largest number is : " << z;
  
    return 0;
}