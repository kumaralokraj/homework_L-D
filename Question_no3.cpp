#include<iostream>
using namespace std;

class MaxArray {
    int arr[10], n;
public:
    void inputArray() {
        cout << "Enter the array size (max 10): ";
        cin >> n;
        if (n > 10) {
            cout << "Size exceeds limit. Setting size to 10." << endl;
            n = 10;
        }
        cout << "Enter array elements: ";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    }

    void findMaxElement() {
        int max = arr[0];
        for (int i = 1; i < n; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        cout << "Maximum value is: " << max << endl;
    }
};

class MinArray {
    int arr[10], n;
public:
    void inputArray() {
        cout << "Enter the array size (max 10): ";
        cin >> n;
        if (n > 10) {
            cout << "Size exceeds limit. Setting size to 10." << endl;
            n = 10;
        }
        cout << "Enter array elements: ";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    }

    void findMinElement() {
        int min = arr[0];
        for (int i = 1; i < n; i++) {
            if (arr[i] < min) {
                min = arr[i];
            }
        }
        cout << "Minimum value is: " << min << endl;
    }
};

int main() {
    int n;
    cout << "Press 1 to find maximum element in array" << endl;
    cout << "Press 2 to find minimum element in array" << endl;
    cin >> n;

    if (n == 1) {
        MaxArray maxArray;
        maxArray.inputArray();
        maxArray.findMaxElement();
    } else if (n == 2) {
        MinArray minArray;
        minArray.inputArray();
        minArray.findMinElement();
    } else {
        cout << "Invalid input!" << endl;
    }

    return 0;
}
