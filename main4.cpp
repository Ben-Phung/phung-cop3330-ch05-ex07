/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Ben Phung
 */

#include <iostream>
#include "std_lib_facilities.h"

using namespace std;

int main() {
  double a, b, c;
  double root1, root2, discrim;

  cout << "Enter a b and c: ";
  cin >> a >> b >> c;

  discrim = b*b + 4*a*c;

  if (discrim == 0)
  {
    root1 = -b/(2*a);
    cout << "One root: "<< root1 << endl;
  }
  else if (discrim > 0)
  {
    root1 = (-b + sqrt(discrim)) / (2*a);
    root2 = (-b - sqrt(discrim)) / (2*a);
    cout << "Plus discriminant: " << root1 << endl;
    cout << "Minus discriminant: " << root2 << endl;
  }
  else
  cout << "No real roots." << endl;
}