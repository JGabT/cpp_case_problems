#include<iostream>
#include<cstdlib>
using namespace std;
void prn_random_numbers(int k) {
  for (int i = 0; i < k; ++i) {
    cout << rand() << "\n";
  }
    cout << endl;
}

int main(void) {
  int n, seed;
  cout << "\nSome random numbers will be printed.";
  cout << "\nEnter how many you want? " << endl;
  cin >> n;
  cout << "Enter seed number:";
  cin >> seed; srand(seed);
  prn_random_numbers(n);
  return 0;
}
