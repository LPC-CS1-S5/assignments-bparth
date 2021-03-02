#include <iostream>
using namespace std;

int main(){

  int lower, upper, i; 

  cout<< "Enter two numbers between 0 and 100 to list out all the even numbers in the given range. The first number whould be smaller than the second number. \n";

  cin>>lower>>upper;
  i = lower;
  do{
    if(i%2==0){
      cout<< i <<endl;
      
    }
    i++;
  }while(i<=upper);
  return(0);
  

}