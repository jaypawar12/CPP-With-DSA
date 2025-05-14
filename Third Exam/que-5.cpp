// Q.5 Write a Program to find the perimeter of a circle.

#include <iostream>
using namespace std;

main()
{
    const float PI = 3.14;
    float r;
    float c_perimeter;
    cout << "Enter the radius : ";
    cin >> r;

    c_perimeter = 2 * PI * r;
    cout << "The perimeter of the circle is: " << c_perimeter << endl;

}