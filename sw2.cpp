#include <cstring>
#include <iostream>
using namespace std;

int main() {
  // int array[]={10,20,30};
  // cout << -2[array];
  // return 0;
  char ch, str[200] = "Programming-C"; 
  int i = 0, val;
  cout << "ch \t val" << endl;
  while(str[i]) {
    ch = str[i];
    val = ch;
    cout << ch << " \t " << val << endl;
    i++;
  }
  cout << endl;
  return 0; 

  // char string[size] = "";
  // cin >> string;
  // int length = strlen(string);
  // if (length > size) {
  //   cout << "Too much characters: " << length << endl;
  // } else {
  //   cout << "The length of string is: " << length << endl;
  //   cout << "the val: " << string << endl;
  // }
  // return 0;
}
