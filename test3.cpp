#include<iostream>
using namespace std;
int billy [] = {};  
int n, result = 0;

int main () {
  for (n = 0; n < 5; n++) {
    cout << "Enter number: ";
    cin >> billy[n];
    for (n; n > 0; n--) {
      cout << "Array: ";
      cout << billy[n];
    }
  }
  return 0;
}
