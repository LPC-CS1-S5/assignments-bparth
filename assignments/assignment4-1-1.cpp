#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;
int main(){
  int quantity,ogPrice,pricePerUnit,dPrice,totalPrice;
  double d1,d2,d3,d4;
  pricePerUnit = 99;
  d1 = 0.2; //for 10-19
  d2 = 0.3; //for 20-49
  d3 = 0.4; //for 50-99
  d4 = 0.5; //for 99+

  cout<<"Enter the quantiy of product purchased: "<< endl;
  cin>> quantity;

  if(quantity > 0){
    if(quantity < 10){
      ogPrice = pricePerUnit * quantity;
      totalPrice = ogPrice;
      cout<< "Your total price is " << totalPrice<<endl;
    // }else if( quantity > 10 && quantity < 19){
    }else if( quantity < 20){
      ogPrice = pricePerUnit * quantity;
      dPrice = ogPrice * d1;
      totalPrice = ogPrice-dPrice;

      cout<< "Your original price is " << ogPrice<<endl;
      cout<< "Your discount  is " << dPrice<<endl;
      cout<< "Your total price is " << totalPrice<<endl;

    }else if(quantity < 50){
      ogPrice = pricePerUnit * quantity;
      dPrice = ogPrice * d2;
      totalPrice = ogPrice-dPrice;

      cout<< "Your original price is " << ogPrice<<endl;
      cout<< "Your discount  is " << dPrice<<endl<<endl;
      cout<< "Your total price is " << totalPrice<<endl;

    }else if(quantity < 99){
      ogPrice = pricePerUnit * quantity;
      dPrice = ogPrice * d3;
      totalPrice = ogPrice-dPrice;

      cout<< "Your original price is " << ogPrice<<endl;
      cout<< "Your discount  is " << dPrice<<endl;
      cout<< "Your total price is " << totalPrice<<endl;

  } else if(quantity > 99){
      ogPrice = pricePerUnit * quantity;
      dPrice = ogPrice * d4;
      totalPrice = ogPrice-dPrice;

      cout<< "Your original price is " << ogPrice;
      cout<< "Your discount  is " << dPrice;
      cout<< "Your total price is " << totalPrice;
  }
  else{
    cout<< "Enter a positive number"<<endl;
    exit(0); 
  }
}
}