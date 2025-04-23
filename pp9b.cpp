/*
 * File: pp9b.cpp
 * Author: Brennan Duck, Gracie Cagley, Ella Szymczak
 * Determines the following attributes of a user-defined floating point number:
 * Whether it is even, whether it is positive, what it's value should be
 * rounded.
 */
#include <cmath>
#include <iostream>
using namespace std;

// Prototypes
void figureIt(double x, bool *isEven, char *sign, int *rounded);

int main() {
  // Define variables and accept user input.
  double x;
  bool isEven;
  char sign;
  int rounded;

  do {
    cout << "Enter x: ";
    cin >> x;

    // Call figure it function with variables
    figureIt(x, &isEven, &sign, &rounded);

    // Output results of figureIt()
    cout << x << ": ";
    if (isEven) {
      cout << "even, ";
    } else {
      cout << "not even, ";
    }
    cout << sign << ", " << rounded << endl;
  } while (x != 0);

  return 0;
}

/*
 * figureIt(): Determine several attributes of a floating point number.
 * Params: The number input by the user (x), reference vars for the function:
 * (&isEven,&sign, &rounded)
 */
void figureIt(double x, bool *isEven, char *sign, int *rounded) {
  // Check if x is even
  if (fmod(x, 2) == 0) {
    *isEven = true;
  } else {
    *isEven = false;
  }
  // First check again
  if (x >= 0) {
    // If x is positive, sign should be '+'
    *sign = '+';
    // Handle rounding if remainder is positive
    if (fmod(x, 1) >= 0.5) {
      *rounded = ceil(x);
    } else {
      *rounded = floor(x);
    }
  } else {
    // If x is negative, sign should be '-'
    *sign = '-';
    // Handle rounding if remainder is negative
    if (fmod(x, 1) <= -0.5) {
      *rounded = floor(x);
    } else {
      *rounded = ceil(x);
    }
  }
}
