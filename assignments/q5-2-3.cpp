#include<iostream>

using namespace std;

int main(){
  //Initialized the variables so then they can be set later 
  int begin, end, n, i;

  //User enters the beginning and end number

  cout<<"Enter your beginning and the ending numbers"<<endl;
  cin >> begin>>end;

  //checks to see that both numbers are under 100 and that begin is less than end
  if(begin < 100 && end < 100 && begin < end){
    n=begin;
    while(n <= end){

      for( i = 2;i < n;i++ ){
        if(n % i == 0){
            break;
        }
      }
      if(i != n){
        //commented out this part of the code because the program oly asks for the prime numbers, but uncommenting will show what numbers are  not prime
        //cout<< n << " Is not a prime number"<<endl;
      }else{
        cout <<n<< " Is a prime number"<<endl;      
      }
      n++;
    }
  }else{
    cout<< "Make sure that your beginning and end numbers are under 100, and that the beginning number is less than the end number!!"<<endl;
  }
}