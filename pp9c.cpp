/*
 * Name: pp9c.cpp
 * Author: Brennan Duck, Gracie Cagley, Ella Szymczak
 * Takes name and age via stdin and returns them via stdout
 */
#include <iostream>
using namespace std;

// Prototype
void getData(string &name, int &age);

int main() {
  string name;
  int age;

  // Prompt the user for info
  cout << "Enter your name and age: ";
  // Call getData()
  getData(name, age);
  cout << name << " " << age << endl;

  return 0;
}

/*
 * getData(): Records the value of age and getData
 * Params: References to name and age to record values to.
 */
void getData(string &name, int &age) { cin >> name >> age; }
