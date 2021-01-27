// Write a program that computes the tax and tip on a restaurant bill for a patron with a $88.67 meal charge.

// The tax should be 6.75 percent of the meal cost.
// The tip should be 20 percent of the total after adding the tax.

// Display the meal cost, tax amount, tip amount, and total bill on the screen(All amount should be displayed with 2 precision numbers and decimal point.)
// Describe your programming logic as the comments.

#include <iostream>
using namespace std;

int main(){
  double bill = 88.67;
  double tax = 1.0675;
  double tip = 0.2;

  double billAfterTax = bill*tax;
  double tipGiven = billAfterTax * tip;
  double billWithTip = billAfterTax + tipGiven;

  cout << "Cost of meal before tax: " << bill <<endl;
  cout << "Cost of meal after tax: " << billAfterTax <<endl;
  cout << "Cost of tip: " << tipGiven <<endl;
  cout << "Total cost of meal is: "<< billWithTip << endl;
}