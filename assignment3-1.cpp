#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  double priceA = 15.00;
  double priceB = 12.00;
  double priceC = 9.00;
  double total;

  int numTixA;
  int numTixB;
  int numTixC;

  cout << "How many tickets were sold in Class A?" << endl;
  cin >> numTixA ;
  cout << "How many tickets were sold in Class B?" << endl;
  cin >> numTixB ;
  cout << "How many tickets were sold in Class C?" << endl;
  cin >> numTixC ;


  //Claculate the total
  
  total = (priceA*numTixA) + (priceB*numTixB) + (priceC*numTixC);

  // std::cout << std::fixed;
  // std::cout << std::setprecision(2);
  // std::cout << total;
  cout << setprecision(2) << fixed << total <<endl;

}