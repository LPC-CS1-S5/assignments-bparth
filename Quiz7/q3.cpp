#include <iostream>
using namespace std;

int findmax(int numbers[], int, int);
const int N = 50;
int main(){
  //declared all the variables
  int numbers[N], numbers1[20], numbers2[20], max1, max2, num, entry;

  //asks how many items does the person want in the array
  cout<< "Enter the number of items you want in your array: ";
  cin>> num;

  //the user can now in0put the numbers he wants in the array
  cout<< "Enter your numbers for the array: "<<endl;

  for(int i = 0; i<num;i++){
    cin>>numbers[entry];
  }

  //Lists out all the numbers in the array
  cout<< "The given numbers in your array are: "<<endl;
  cout<< "[ ";

  //numbers get divided into 2 seperate arrays for the ease of it
  for(int i = 0; i< num;i++){
    //first half of the main array stored in the new array
    if(i<num/2){
      numbers1[i] = numbers[i];
      cout<<numbers1[i]<<" , ";
    }else{
      //this stores the other half of the numbers into the second array
    }
  }
}