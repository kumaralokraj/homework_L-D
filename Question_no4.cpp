#include<iostream>
using namespace std;

int main() {
    int arr[10], n, i;
    cout << "Enter the array size (under 10): ";
    cin >> n;
    cout<<"Enter the Element in array:"<<endl;
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Reversed array is: ";
    for(i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    return 0;
}
