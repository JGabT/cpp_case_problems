#include<iostream>
#include<vector>
using namespace std;

int main() {
  vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
  cout << cars[0] << "\n";
  cout << cars[1] << "\n";
  cout << "Max Size: " << cars.max_size() << "\n";
  return 0;
}
