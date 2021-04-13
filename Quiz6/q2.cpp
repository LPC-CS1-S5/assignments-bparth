#include <iostream>
#include <cstdlib>
using namespace std;

void getRand(int &, int &, int &);
void getRandA();
int findMin(int, int, int);
void printResult();

int main(){
  int min = 0;
  printResult();

}

void getRandA(){
  int a =0, b=0 , c=0;
   
   srand((unsigned) time(0));
   a = rand()%100;
   b = rand()%100;
   c = rand()%100;
   
   cout<< "The numbers are: "<< a <<", "<< b<<", "<<c<<endl;
   findMin(a, b, c);
}

int findMin(int a, int b, int c){
  int min = 0;

  if(a<=b && a<=c){
    min = a;
  }else if(b <=a && b<= c){
    min = b;
  }else{
    min = b;
  }
  cout<< "Min is: " << min<<endl;
  return(min);
}

void printResult(){
  getRandA();
}
