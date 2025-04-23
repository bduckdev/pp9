/*
 * File: pp9a.cpp
 * Author: Brennan Duck, Gracie Cagley, Ella Szymczak
 * Records two values from stdin (i & j) and swaps their values, then prints.
 */
#include <iostream>
using namespace std;

// Prototypes
void mySwap(string *i, string *j);

int main() {
  // Declare variables and capture info
  string a, b;
  string *i = &a;
  string *j = &b;
  cout << "Enter first word: ";
  cin >> *i;
  cout << "Enter second word: ";
  cin >> *j;

  // Call mySwap()
  mySwap(i, j);

  // Output i & j
  cout << "First word: " << *i << endl;
  cout << "Second word: " << *j << endl;

  return 0;
}

void mySwap(string *i, string *j) {
  // Declare tmp and set it's value to i
  string tmp;
  tmp = *i;
  // i's value to j, and j's value to tmp
  *i = *j;
  *j = tmp;
}
