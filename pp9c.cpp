/*
 * Name: pp9c.cpp
 * Author: Brennan Duck, Gracie Cagley, Ella Szymczak
 * Takes name and birthYear via stdin and returns them via stdout
 */
#include <iostream>
using namespace std;

const int CURRENT_YEAR = 2025;

// Prototype
void getData(string *name, int *birthYear);

int main() {
  char c = 'Y';
  string name;
  int birthYear;

  // Keep prompting the user unless c is 'N' or 'n'
  while (c != 'N' && c != 'n') {
    // Call getData()
    getData(&name, &birthYear);
    // Print output and ask user if they want to continue
    cout << name << " was " << CURRENT_YEAR - birthYear << " in "
         << CURRENT_YEAR << '\n';
    cout << "Continue (Y/N)? ";
    cin >> c;
    cin.ignore();
  }

  return 0;
}

/*
 * getData(): Records the value of birthYear and getData
 * Params: References to name and birthYear to record values to.
 */
void getData(string *name, int *birthYear) {
  // Ask user for name and birth year, then store the values
  cout << "Enter name: ";
  getline(cin, *name);
  cout << "Enter birth year: ";
  cin >> *birthYear;
}
