// QuIESTION #2 - SHIPPING CONTAINERS
#include <iostream>
#include <iomanip>

using namespace std;

int main(){

//creates the variables such as weight, miles, and different price rates 
int weight, miles;
double p1,p2,p3,p4,rate;

//price rates are given to us
p1 = 1.1;
p2 = 2.2;
p3 = 3.7;
p4 = 4.8;

//tells the user that we have to enter the weight and distance
cout << "Enter the weight of your container and miles being shipped: "<<endl;

//takes the wight and distance from the user.
cin>> weight>> miles;

// sure that the weight is above 0 and below 20, and that the distance is above 10 but below 3000, and also checks for no negative numbers 
if(weight > 0 && weight <= 20 && miles >10 && miles <= 3000){

  //calculates the rate for boxes under 2,6,10,20 kg and so on.
  if(weight <= 2){
    if(miles < 500){
		rate = p1* miles;
		// rate = p1;
		cout<< "your rate is: "<< rate << " \n" << "Weight is: "  << weight << " \n"<< "Miles is: " << miles << endl;
  	}else{
		//rate for the box if over 500 miles
		// rate = p1;
		rate = (miles/500)*p1;
		cout<< "your rate is: "<< rate << " \n" << "Weight is: "  << weight << " \n"<< "Miles is: " << miles << endl;
	}
  }
  else if(weight <= 6){
		if(miles < 500){
		// rate = p2;
		rate = p2* miles;
		cout<< "your rate is: "<< rate << " \n" << "Weight is: "  << weight << " \n"<< "Miles is: " << miles << endl;
	}else{
		// rate = p2;
		rate = (miles/500)*p2;
		cout<< "your rate is: "<< rate << " \n" << "Weight is: "  << weight << " \n"<< "Miles is: " << miles << endl;
	}
  }
  else if(weight <= 10){
		if(miles < 500){
		// rate = p3;
		rate = p3* miles;
		cout<< "your rate is: "<< rate << " " << "Weight is: "  << weight << " "<< "Miles is: " << miles << endl;
	}else{
		rate = (miles/500)*p3;
		cout<< "your rate is: "<< rate << " \n" << "Weight is: "  << weight << " \n"<< "Miles is: " << miles << endl;
	}
  }
  else {
    if(miles < 500){
		rate = p4*miles;
		cout<< "your rate is: "<< rate << " \n" << "Weight is: "  << weight << " \n"<< "Miles is: " << miles << endl;
    }else{
		rate = (miles/500)*p4;
		cout<< "your rate is: "<< rate << " \n" << "Weight is: "  << weight << " \n"<< "Miles is: " << miles << endl;
    }

  }

}else{
  //tells the user this warning that the number they put in was invalid. 
  cout<< "Enter a weight less than 20 kg and greater than 0kg. And make sure your distance is under 3000 miles and over 10 miles"<<endl;
  exit(0); 
}

}
