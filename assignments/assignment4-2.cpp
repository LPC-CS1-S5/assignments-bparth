#include <iostream>
#include <iomanip>
using namespace std;

// READ THE NOTE: 
// CODE PASTED FROM MY OWN IDE ON MAC

int main(){
  int num1, num2, num3,num4, min, max, mid;

// cout <<"Enter 4 diff numbers: " << endl;
// cin>> num1 >> num2>> num3 >> num4; 
srand(time(NULL));
num1 = rand() % 100;
num2 = rand() % 100;
num3 = rand() % 100;
//num4 = rand() % 100;

cout << "Your three random numbers are: " << num1 <<" "<<num2<<" "<<num3 <<endl;

// compare the numbers 


if(num1 < num2){
  min = num1;
}else{
  min = num2;
}
if(num3 < min){
  min = num3;
}

if(num1 > num2){
  max = num1;
}else{
  max = num2;
}
if(num3 > max){
  max = num3;
}

if((num1 < num2 && num2 < num3) || (num3< num2 && num2 < num1)){
  mid= num2; 
}else if ((num2 < num1 && num1< num3) || (num3 < num1 && num1 < num2)){
  mid= num1;
}else{
  mid= num3;
}

 
cout<< "the smallest number is: "<< min << endl; 
cout<< "the middle number is: "<< mid << endl; 
cout<< "the biggest number is: "<< max << endl; 
cout<< "ascending order: "<< min<<" "<<mid<<" "<<max << endl; 


}