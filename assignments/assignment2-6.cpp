// Challenge 2 

// - Check the lecture slides for more details

// Write a program that  stores the following values in five different variables:

// 28, 32, 37, 24, and 33.

// The program should first calculate the sum of these five variables and store the result in a separate variable named sum .
// Then, the program should divide the sum variable by 5 to get the average.
// Display the sum and average with precision 3 on the screen.

#include <iostream>
using namespace std;

int main(){
  int a = 28;
  double b = 32.00;
  float c = 37.00;
  short d = 24.00;
  long e = 33.00;

  double sum = a+b+c+d+e;
  double avg = (sum)/5;

  cout.setf(ios::fixed,ios::floatfield);
  cout.precision(3);
  cout << sum << endl;
  //cout << setprecision(3)<<sum <<endl;
  cout << avg <<endl; 
}