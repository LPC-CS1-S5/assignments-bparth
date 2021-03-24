#include <iostream>
#include <math.h>
#include <algorithm> 
using namespace std;

int getsum(int n){
  int b, sum, temp, max, min;
  cout<<"Enter " <<n<<" numbers.\n";
  int arr[n];

  for(int i = 0; i<n; i++){
    cin>>arr[i];
    sum += arr[i];
  }
  
  return sum;
}