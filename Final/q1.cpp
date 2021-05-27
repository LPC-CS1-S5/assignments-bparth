//copy pasted the code here from canvas quiz. 

#include <iostream>
using namespace std;

void bubble(int[], int);
void printout(int[], int);

int main() {
        const int N = 5;
        int numbers[N] = {15, 10, 30, 20, 5};
        bubble(numbers, N);
        //printout(numbers, N);
}
void bubble(int numbers[], int last) {
  for (int i = 0; i < last - 1; i++) {
    for (int j = 0; j < last - i - 1; j++){
      if(numbers[j] > numbers[j + 1]){
        cout<<"i: "<< i << " j: " <<j << " num[j] = "<< numbers[j] << " num[j+1] = " << numbers[j+1]<<endl; // will qrite out the i and the j values and the array values for me. like a break point. 
        swap(numbers[j], numbers[j + 1]);

        for(int i = 0; i<last;i++){
          cout<<numbers[i]<<endl;
        }
      }
    }
  }
}
void printout(int numbers[], int last) {
        for (int i = 0; i < last; i++)
                cout << numbers[i] << "\t";
        cout << endl;
}