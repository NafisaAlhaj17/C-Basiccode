//Write a c++ program for add two numbers using pointer.
#include <iostream>
using namespace std;

int main() {
    int num1, num2, sum;
    int* ptr1 = &num1;
    int* ptr2 = &num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Using pointers to access values
    sum = *ptr1 + *ptr2;

    cout << "Sum: " << sum << endl;

    return 0;
}

