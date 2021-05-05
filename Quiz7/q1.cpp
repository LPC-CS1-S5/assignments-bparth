#include <iostream>
#include <cstdlib>

using namespace std;

const int N = 10;

int main(){
  
  //making the array
  int number[N] = {10,15,5,-25,29,20,25,30,45,20};

  //for loop to go through the array
  for(int i = 0; i<N;i++){

    //just for the first number of the array 
    if(i ==0 && i+1 < 10){
      if(abs(number[i]-number[i+1])<10){
        cout<< "At the index " << i<< " the number "<< number[i]<<" has the adjacents less than 10"<<endl;
      }
    }else if(i == N-1 && i>0){
      // for the last 2 numbers of the array so that they can get compared

      if (abs(number[i]-number[i-1])<10){
        cout<< "At the index " << i<< " the number "<< number[i]<<" has the adjacents less than 10"<<endl;
      }
    }else if(abs(number[i]-number[i+1])<10 && abs(number[i]-number[i-1])<10){
      // this condition compares ass the middle numbers 
      cout<< "At the index " << i<< " the number "<< number[i]<<" has the adjacents less than 10"<<endl;
    }
  }
  return 1; 
}