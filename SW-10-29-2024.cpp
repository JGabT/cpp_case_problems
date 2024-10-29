#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Input an integer value: ";
    cin >> n;

    cout << "Create an " << n << " x " << n << " matrix with " << n << " as the value" << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << n << " ";
        }
        cout << endl;
    }

    return 0;
}
