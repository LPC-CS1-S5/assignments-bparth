#include <iostream>
using namespace std;

int findmax(int numbers[], int, int);
const int N = 50;
int main(){
  //declared all the variables
  int numbers[N], numbers1[20], numbers2[20], max1, max2, num, entry;

  cout<< "Enter the number of items you want in your array: ";
  cin>> num;

  cout<< "Enter your numbers for the array: "<<endl;

  for(int i = 0; i<num;i++){
    cin>>numbers[entry];
  }

  cout<< "The given numbers in your array are: "<<endl;
  cout<< "[ ";
}