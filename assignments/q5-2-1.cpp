#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){

  srand (time(NULL));
  //first I made 5 different integers so that they can be inatilized afterwards.
  int n1,n2,n3,n4,n5, min=0;

  //this gives the numbers a random value from 1 to 100. 
  n1 = rand()%100;
  n2 = rand()%100;
  n3 = rand()%100;
  n4 = rand()%100;
  n5 = rand()%100;

  cout<<"Your random numbers are: "<< n1<<" "<<n2<<" "<<n3<< " "<<n4<<" "<<n5<<endl;
  //comparison part of the program that comares the number to the set max number then sees if its biggers or smaller compared to the rest of the numbers. 

  if(n1<n2){
    min = n1;
  }else{
    min = n2;
  }
  if(n3<min){
    min = n3;
  }else{
    //no code here
  }
  if(n4<min){
    min = n4;
  }else if(n5<min){
    min = n5;
  }


  //prints out the minum number from the list 
  cout<<"The min number is : "<< min<<endl;


}
