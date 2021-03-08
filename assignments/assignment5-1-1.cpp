#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  float i,j;
  float invPwr;

  cout<< "Enter number to raise 2 to a power: \n";
  cin>> j;

  cout<< "2^" << j <<endl;

  i=1;
  if(j>0){
    while(j != 0){
      i *= 2;
      j--;
    }
    cout<< i<<endl;
  }else{
    j = j*-1;
    for(int b =1; b<=j;b++){
      i *= 2;

    }
    invPwr = 1.0/i;
    cout<< invPwr<<endl;
  }
  //cout<< i<<endl;
}