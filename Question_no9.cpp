#include <iostream>
#include <vector>

using namespace std;

vector<int> segregateArray(vector<int>& arr) {
    vector<int> evens, odds;

    // Separate even and odd numbers
    for (int num : arr) {
        if (num % 2 == 0) {
            evens.push_back(num);
        } else {
            odds.push_back(num);
        }
    }

    // Combine the results
    evens.insert(evens.end(), odds.begin(), odds.end());
    return evens;
}

int main() {
    vector<int> arr = {12, 34, 45, 9, 8, 90, 3};
    vector<int> result = segregateArray(arr);

    cout << "Segregated array: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
