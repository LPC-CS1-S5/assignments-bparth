#include <iostream> 
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

int makearray(int []);
void bubble(int [], int);
void printout(int [], int);

const int SIZE = 100;

int main(){

int numbers[SIZE];
int last = makearray(numbers);

printout(numbers, last);
bubble(numbers,last);
cout<< endl;
printout(numbers,last);

}

int makearray(int numbers[]){
  srand(time(NULL));
  int nums = rand()% 20 + 10;
  //int components = rand()% 100;
  srand(time(NULL));
  for(int i = 0; i <= nums; i++){
    numbers[i] = rand()% 100;
  }
  //for(int i = 0  ; i<=nums;i++){
    //cout<<numbers[i] <<" ";
  //}
}

void bubble(int numbers[], int last){
  for(int i = 0; i < last-1;i++){
    if(numbers[i] >= numbers[i+1]){
      swap(numbers[i],numbers[i+1]);
    }
  }
}

void printout(int numbers[], int last){
  for(int i = 0 ; i< last-1;i++){
    cout<<numbers[i]<<" ";
  }
}