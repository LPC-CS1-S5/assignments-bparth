#include <iostream>
using namespace std;
int main(){
  int weight, miles; 
  double p1,p2,p3,p4, rate;
  p1 = 1.1;
  p2 = 2.2;
  p3 = 3.7;
  p4 = 4.8;

  cout<< "Input the weight of your container and miles bwing shipped:"<< endl;
  cin>> weight >> miles; 

  if(weight >0 && weight <= 20 && miles >= 10 && miles <= 3000){
    if(weight <= 2){
      if(miles < 500){
        rate = p1 * miles;
      cout<< "Your price is: " << rate << " " << "Weight is: "<< weight << "kgs "<< "Miles is: " << miles << endl; 
      }else{
        rate = (miles/500)* p1;
        cout<< "Your price is: " << rate << " " << "Weight is: "<< weight << "kgs "<< "Miles is: " << miles << endl; 
      }
    }else if(weight <= 6){
      if(miles < 500){
        rate = p2 * miles;
      cout<< "Your price is: " << rate << " " << "Weight is: "<< weight << "kgs "<< "Miles is: " << miles << endl; 
      }else{
        rate = (miles/500)* p2;
        cout<< "Your price is: " << rate << " " << "Weight is: "<< weight << "kgs "<< "Miles is: " << miles << endl; 
      }
    } else if(weight <= 10){
      if(miles < 500){
        rate = p3 * miles;
      cout<< "Your price is: " << rate << " " << "Weight is: "<< weight << "kgs "<< "Miles is: " << miles << endl; 
      }else{
        rate = (miles/500)* p3;
        cout<< "Your price is: " << rate << " " << "Weight is: "<< weight << "kgs "<< "Miles is: " << miles << endl; 
      }
    } else{
      if(miles < 500){
        rate = p4 * miles;
      cout<< "Your price is: " << rate << " " << "Weight is: "<< weight << "kgs "<< "Miles is: " << miles << endl; 
      }else{
        rate = (miles/500)* p4;
        cout<< "Your price is: " << rate << " " << "Weight is: "<< weight << "kgs "<< "Miles is: " << miles << endl; 
      }
    }
    
  }else{
    cout<< "Enter a weight less than 20 kg and greater than 0kg. And make sure your distance is under 3000 miles and over 10 miles"<<endl;
    exit(0); 
  }

   
}