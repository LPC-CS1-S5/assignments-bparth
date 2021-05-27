
#include <iostream>
using namespace std; 
bool isSame(int arr1[], int arr2[], int int);

int main(){
const int SIZE1=10;
const int SIZE2=5;
int numbers2[SIZE2] = {2, 3, 5, 9, 10};
int numbers1[SIZE1] = {1, 2, 3, 5, 9, 10, 11, 13, 15, 17};

}

bool isSame(int arr1[], int arr2[], int m, int n){
int i = 0, j = 0; // establises our two ints that we'll use later on in the code to iterate through the arrays. 

if(m<n){
  return 0; 
} //this condition makes sure that if the length of the 1st array is smaller than the second array, then we break the program. 

while(i < n && j<m){
  if(arr1[j]<arr2[i]){
    j++;
    //this if statement checks that our array1's first value matches the second array's first value, and if it doesnt then we increase j by one meaning that now we'll check the second number in the array1 with the fisrt number in array2
  }else if(arr1[j]==arr2[i]){
    j++;
    i++;
    // this if setement basically acknowledges that both the values at that index are the same so then i and j are increased by one to check the next index. 
  }else if(arr1[j]>arr2[i]){
    return 0;
    //if we reach here that basically means that the code's run through and that we have reached the end of the array.  
  }
}
return (i<n) ? false : true; //sets a conditional return of eitehr true/false depending on how the code executes up top. 

}