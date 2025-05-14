// Q.2 Write a Program to find the area of a square.

#include <iostream>
using namespace std;

main(){
    float len;
    float s_area;

    cout << "Enter the length : ";
    cin >> len;

    s_area = len * len;
    cout << "The area of the square is : " << s_area;
}