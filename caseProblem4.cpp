#include <iostream>
using namespace std;

void printDaysInMonth(int month) {
    switch (month) {
        case 1: cout << "31 Days" << endl; break; // January
        case 2: cout << "28/29 Days" << endl; break; // February
        case 3: cout << "31 Days" << endl; break; // March
        case 4: cout << "30 Days" << endl; break; // April
        case 5: cout << "31 Days" << endl; break; // May
        case 6: cout << "30 Days" << endl; break; // June
        case 7: cout << "31 Days" << endl; break; // July
        case 8: cout << "31 Days" << endl; break; // August
        case 9: cout << "30 Days" << endl; break; // September
        case 10: cout << "31 Days" << endl; break; // October
        case 11: cout << "30 Days" << endl; break; // November
        case 12: cout << "31 Days" << endl; break; // December
        default: cout << "Invalid month" << endl; break; // Handle invalid input
    }
}

int main() {
    int N;
    cout << "Enter the month number (1-12): ";
    cin >> N;

    printDaysInMonth(N);

    return 0;
}
