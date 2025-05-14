// Q.1 Write a Program to find the area of a circle.

#include <iostream>
using namespace std;

main()
{
    const float PI = 3.14;
    float r;
    float c_area;
    cout << "Enter the radius : ";
    cin >> r;

    c_area = PI * r * r;
    cout << "The area of the circle is: " << c_area << endl;

}