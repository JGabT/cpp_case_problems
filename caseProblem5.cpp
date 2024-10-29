#include <iostream>
using namespace std;

int countDigits(int number) {
    if (number == 0) return 1; // Special case for 0

    int count = 0;
    while (number != 0) {
        number /= 10;
        count++;
    }
    return count;
}

int main() {
    int number;
    cout << "Enter any Number: ";
    cin >> number;

    int length = countDigits(number);
    cout << "Number of Digits in the given number is: " << length << endl;

    return 0;
}
