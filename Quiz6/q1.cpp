#include <iostream>
using namespace std;
void swapTwoValues(int &, int &);
void swapTwoValues(float, float);

int main(){

  swapTwoValues(10,40);
  swapTwoValues(3.4323, 9.43423);

}

void swapTwoValues(int a, int b){
int n1, n2;

n1 = a;
n2 = b;

cout<<n2<<", "<<n1<<endl;
}

void swapTwoValues(float a, float b){
float n1, n2;

n1 = a;
n2 = b;

cout<< n2<<", "<<n1<<endl;
}