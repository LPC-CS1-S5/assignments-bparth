#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
  int x,y,ex=1;
  int i=0;

  cout<<"Enter two numbers between 0 - 1300: "<<endl;
  cin>> x >> y;

  if( x >= 0 && y <= 1300){
    while(x<=y){
      i = pow(2,ex);
      if(i>=x && i<=y){
        cout<<"2^"<<ex<<" ="<<i<<endl;
      }
      ex++;
      x++;
    }

  }
}