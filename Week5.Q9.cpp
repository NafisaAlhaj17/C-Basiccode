//Write a C++ program to find the frequency of a particular number in a list of integers.
#include <iostream>
using namespace std;

int main() {
    int n, num, count = 0;
    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter number to find frequency: ";
    cin >> num;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == num) 
		count++;
    }

    cout << "Frequency of " << num << ": " << count << endl;

    return 0;
}

