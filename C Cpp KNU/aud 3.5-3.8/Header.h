#include <iostream>
using namespace std;
int nom3_7()
{
float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;
cout << "Enter coefficients a, b and c: ";
cin >> a >> b >> c;
discriminant = b * b - 4 * a * c;

if (discriminant > 0) {
    x1 = (-b + sqrt(discriminant)) / (2 * a);
    x2 = (-b - sqrt(discriminant)) / (2 * a);
    cout << "Roots are real and different." << endl;
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
}

else if (discriminant == 0) {
    cout << "Roots are real and same." << endl;
    x1 = -b / (2 * a);
    cout << "x1 = x2 =" << x1 << endl;
}

else {
    realPart = -b / (2 * a);
    imaginaryPart = sqrt(-discriminant) / (2 * a);
    cout << "Roots are complex and different." << endl;
    cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
    cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
}

return 0;
}
int nom3_5()
{
    float a, b;
    cin >> a >> b;
    if (a > b) {
        cout << "a more then b" << endl;
    }
    else if (a<b){
        cout << "b more than a" << endl;
    }
    else {
        cout << "b equal a" << endl;
    }
    return 0;
}
int nom3_6() {
    float a, b, c;
    cin >> a >> b >> c;
    if (abs(a) > abs(b) && abs(a) > abs(c))
    {
        cout << "module a more then b and c" << endl;
    }
    else if (abs(a) < abs(b) && abs(a) > abs(c))
    {
        cout << "module b more then a and c" << endl;
    }
    else if (abs(a) < abs(b) && abs(b) < abs(c))
    {
        cout << "module c more then a and b" << endl;
    }


    if (abs(a) < abs(b) && abs(a) < abs(c))
    {
        cout << "module a is less then b and c" << endl;
    }
    else if (abs(a) > abs(b) && abs(b) < abs(c))
    {
        cout << "module b is less then a and c" << endl;
    }
    else if (abs(a) < abs(b) && abs(b) < abs(c))
    {
        cout << "module b more then a and c" << endl;
    }
    return 0;
}