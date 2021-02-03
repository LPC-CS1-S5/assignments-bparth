#include <iostream>
#include<iomanip>
using namespace std;
int main(){
  char m1,m2,m3;
  double r1,r2,r3;
  double avg; 
  cout << "Enter the first month and amount of rain: " <<endl;
  cin >> m1 >> r1;
  cout << "Enter the second month and amount of rain: " <<endl;
  cin >> m2 >> r2;
  cout << "Enter the third month and amount of rain: " <<endl;
  cin >> m3 >> r3;

  //calc average
  avg = (r1+r2+r3)/3.0;

  cout << "the average rainfall in the months of " << m1 << ", " << m2 << ", " << m3 << "is " << avg <<endl;
}