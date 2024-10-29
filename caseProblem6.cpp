#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int findSecondLargest(const vector<int>& arr) {
    if (arr.size() < 2) return -1; // Not enough elements for a second largest

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int num : arr) {
        if (num > largest) {
            secondLargest = largest; // Update second largest
            largest = num; // Update largest
        } else if (num > secondLargest && num < largest) {
            secondLargest = num; // Update only second largest
        }
    }

    return (secondLargest == INT_MIN) ? -1 : secondLargest;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    if (size < 2) {
        cout << "The array doesn't have enough elements." << endl;
        return 0;
    }

    vector<int> arr(size);
    cout << "Enter the elements of the array (seperated by spaces): ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int result = findSecondLargest(arr);
    if (result != -1) {
        cout << "The second largest element in the array is: " << result << endl;
    } else {
        cout << "There is no second largest element in the array." << endl;
    }

    return 0;
}
