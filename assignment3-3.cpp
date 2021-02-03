#include <iostream>
#include <iomanip>

using namespace std; 

int main(){
  double C, F;

  cout << "Enter the temperature in Celcius " << endl;
  cin >> C;

  F = ((9/5.0)* C) + 32.00;

  cout << "Celcius " << C << " in Farenheit is: "<< F << setprecision(2) << fixed<< endl;
}