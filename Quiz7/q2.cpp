#include <iostream>

using namespace std;

void printTriangle(int numbers[][3], int);

const int N = 3;

int main(){
  int numbers[N][N] = {{0,1,2},{3,4,5},{6,7,8}};
  printTriangle(numbers, N);
}

void printTriangle(int numbers[3][3], int N){
  //For loop to go throught the 2d array

  for(int i = 0; i<N;i++){
    for(int j = 0; j <N; j++){
      if(i>=j){
        cout<<numbers[i][j]<<" ";
      }
    }
    cout<<endl;
  }
}