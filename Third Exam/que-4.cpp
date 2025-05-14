// Q.3 Write a Program to find simple interest.

#include <iostream>
using namespace std;

main()
{
    float p, r, t;
    cout << "Enter the principal amount : ";
    cin >> p;
    cout << "Enter the rate of interest: ";
    cin >> r;
    cout << "Enter the time (in years) : ";
    cin >> t;

    float interest = (p * r * t) / 100;
    cout << "Simple Interest: " << interest << endl;
}