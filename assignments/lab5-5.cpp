#include <iostream>
using namespace std;

int main(){
  int upper, lower, i;

  cout << "Enter two numbers. Make sure the first number is smaller than the second number"<<endl;

  cin>>lower>>upper;

  i = lower;

  while(i<upper){
    if(i%2==0){
      cout<<i<<endl;
    }
    i++;
  }

}