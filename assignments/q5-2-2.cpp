#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
  //Initialized the int for base and the exponenets
  int base, exp, result=1;

  //code so that the user can input his own base and exponenet.
  cout<<"Enter your base and the exponent you want to raise it to : "<<endl;
  cin>> base>> exp;

  //calculates the power by multiplying the base by itself 
  for(int i = 1; i<=exp;i++){
    result *= base;
    cout<< base <<"^ "<<i<< " = "<<result<<endl;
  }

}