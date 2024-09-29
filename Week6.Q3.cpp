//Write a C++ Program to Print the address of the Variable Using a Pointer.
#include <iostream>
using namespace std;

int main() {
    int var = 10;
    int* ptr = &var;  // Declare pointer and assign address of var

    cout << "Value of var: " << var << endl;
    cout << "Address of var: " << ptr << endl;

    return 0;
}

