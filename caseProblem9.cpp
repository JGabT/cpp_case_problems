#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int n, int N) {
    int sum = (N * (N + 1)) / 2;
    int arrSum = 0;
    for (int i = 0; i < n; i++) {
        arrSum += arr[i];
    }
    return sum - arrSum;
}

int main() {
    int arr[] = { 1, 2, 3, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int N = 5; // Maximum value in sequence

    int missingNumber = findMissingNumber(arr, n, N);
    cout << "Missing Number: " << missingNumber;

    return 0;
}
