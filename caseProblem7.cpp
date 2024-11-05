#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int number;
    cout << "Prime Number Checker" << endl;
    cout << "Enter a Number: ";
    cin >> number;

    bool isPrime = true;

    if (number <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i <= number / 2; ++i) {
            if (number % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }

    return 0;
}
