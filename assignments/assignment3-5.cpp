#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int main(){
  srand ( time(NULL) );
  int num1,num2,num3;

  num1 = rand()%100;
  num2 = rand()%100;
  num3 = rand()%100;

float sum = num1+num2+num3; 
float avg = sum/3;

cout << fixed << setprecision(2) << "The 3 numbers are: "<< num1 << " "<< num2 << " " << num3 << endl;
cout << fixed << setprecision(2) << "The sum of the 3 numbers is: "<< sum << endl;
cout << fixed << setprecision(2) << "The average of the 3 numbers is: "<< avg << endl;

}