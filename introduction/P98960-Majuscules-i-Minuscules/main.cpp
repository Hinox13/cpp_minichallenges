#include <iostream>
using namespace std;


// A=65 Z=90 a=97 z=122

int main () {
  char c;
  cin >> c;
  if (c >= 'A' and  c<='Z')  c = c + 32;
  else  c = c - 32;
  cout << c << endl;
}