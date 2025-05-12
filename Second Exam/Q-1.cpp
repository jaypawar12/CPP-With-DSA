#include <iostream>
using namespace std;

main() {
    int num = 12, num2 = 6;

    cout << "Addition of " << num << " " << "and " <<  num2<< " "   << "is "  << num + num2 << endl;
    cout << "Subtraction of " << num << " " << "and " <<  num2<< " "   << "is "  << num - num2 << endl;
    cout << "Multiplication of " << num << " " << "and " <<  num2<< " "   << "is "  << num * num2 << endl;
    cout << "Division of " << num << " " << "and " <<  num2<< " "   << "is "  << num / num2 << endl;
    cout << "Modulo of " << num << " " << "and " <<  num2<< " "   << "is "  << num % num2 << endl << endl << endl;


    cout << num << " + " <<  num2 << " = " << num + num2 << endl;
    cout << num << " - " <<  num2 << " = " << num - num2 << endl;
    cout << num << " * " <<  num2 << " = " << num * num2 << endl;
    cout << num << " / " <<  num2 << " = " << num / num2 << endl;
    cout << num << " % " <<  num2 << " = " << num % num2 << endl;
}