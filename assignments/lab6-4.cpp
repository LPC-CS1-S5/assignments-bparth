#include <iostream>
#include <math.h>
using namespace std;

int getsum(int);

int main(){

  int n, res;
  cout<<"Enter your numbers: "<<endl;
  cin>> n; // the number of numbers

  res = getsum(n);

  cout<< "The result of the sum is: "<< res <<endl;
  return(0);
}
