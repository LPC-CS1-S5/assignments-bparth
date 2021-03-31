#include <iostream>
#include <cstdlib>
int getRand();
int getRand(int);
int getRand(int , int );
using namespace std;
int main(){
  int a,b,c;
  a = getRand();
  b = getRand(20);
  c = getRand(10, 20);

  cout<< a <<" "<<b << " "<< c<<endl;
}

int getRand(){
  int r=0;
  srand((unsigned)time(0));
  r = (rand() % 100 ) + 1;
}
int getRand(int a){
  int r=0;
  srand((unsigned)time(0));
  r = (rand() % a) +1;
}
int getRand(int a, int b){
  int r = 0;
  srand((unsigned)time(0));
  r = (rand() % b) + a;
}