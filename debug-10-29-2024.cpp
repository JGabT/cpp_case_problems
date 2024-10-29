#include<iostream>
#include<cstdlib>

using namespace std;

const int size = 6;

double average(const double a[], const int n) {
    double s = 0.0;
    for (int i = 0; i < n; i++) {
        s += a[i];
        return s / n;
    }
}
double min(const double a[], const int n) {
    double min = a[0];
    for (int i = 1; i < n; ++i) {
        if (min > a[i])
            min = a[i];
            return min;
    }
}

int main() {
    double a[size] = {0.5, 1.5, 6.0, 7.5, 2.3, 4.6};
    cout << "Test array data processing" << endl;
    cout << "average = " << average(a, size) << endl;
    cout << "minimum = " << min(a, size) << endl;
    cout << "maximum = " << maximum(a, size) << endl;
}