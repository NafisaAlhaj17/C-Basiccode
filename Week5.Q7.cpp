#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int positiveCount = 0, negativeCount = 0, oddCount = 0, evenCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeCount++;
        }

        if (arr[i] % 2 == 0 && arr[i] != 0) {
            evenCount++;
        } else if (arr[i] % 2 != 0) {
            oddCount++;
        }
    }

    cout << "Positive numbers: " << positiveCount << endl;
    cout << "Negative numbers: " << negativeCount << endl;
    cout << "Odd numbers: " << oddCount << endl;
    cout << "Even numbers: " << evenCount << endl;

    return 0;
}


