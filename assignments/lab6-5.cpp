#include <iostream>
using namespace std;

int evensumGet(int &);
int oddsumGet(int &);


int main(){
  int evenSum = 0, oddSum = 0,input;

  do{
    cout<<"Enter your numbers: "<<endl;
    cin>>input;
    if(input == -1){
      break;
    }else if(input %2==0){
      evenSum = evensumGet(input);
    }else{
      oddSum = oddsumGet(input);
    }

  }while(1);
  cout<<"Summation of all odd imputs: "<<oddSum<<endl;
  cout<<"Summation of all even imputs: "<<evenSum<<endl;
  
}

int evensumGet(int &n){
  int sum;
  
  sum += n;
  
  return(sum);
}
int oddsumGet(int &n){
  int sum;
  
  sum += n;
  
  return(sum);
}