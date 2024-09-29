//Write a C++ Program for Increment and Decrement Integer Using Pointer.
#include <iostream>
using namespace std;

int main() {
    int var = 15;
    int* ptr = &var;  

    cout << "Initial value: " << *ptr << endl;

    // Increment using pointer
    (*ptr)++;

    cout << "After increment: " << *ptr << endl;

    // Decrement using pointer
    (*ptr)--;

    cout << "After decrement: " << *ptr << endl;

    return 0;
}

