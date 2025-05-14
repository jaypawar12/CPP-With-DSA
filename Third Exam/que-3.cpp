// Q.3 Write a Program to find the area of a triangle.

#include <iostream>
using namespace std;

main()
{
    float b;
    float h;
    float t_area;

    cout << "Enter the base of triangle : ";
    cin >> b;

    cout << "Enter the height of triangle : ";
    cin >> h;

    t_area = 0.5 * b * h;
    cout << "The area of the triangle is : " << t_area;
}