//Question 1 - Geometry calculator

#include <iostream>
#include<iomanip>
using namespace std;

int main(){
  //create integers and doubles so that once the user initializes them they can be used to complete operations. 
  int choice;
  double area, radius, length, height, pi, base, width;
  //pi was given to us in the prompt
  pi = 3.14159;

  //giving out options to the user so that he can coose 1-4 based on what he wants to get calulated. Area of a circle, rect, or triangle are avaliable, or he can simply quit the program

  cout<< "Welcome to the geometry claculator!!! Choose one option from below \n\n";
  cout<<"1. Calculate area of a Circle: \n";
  cout<<"2. Calculate area of a Rectangle: \n";
  cout<<"3. Calculate area of a Triangle: \n";
  cout<<"4. Quit \n";

  // takes the user input and then wil see what the user wants to calculate
  cin>> choice;

  //makes sure that the user is giving a number under 5 to choose a proper choice
	if(choice <= 4){ 

		// #1 is the area of a circle, this calculates that!
		if(choice == 1){
			cout<< "What's the radius?"<<endl;
			cin>> radius;
			if(radius >0){
			area = pi * (radius* radius);
			cout<<fixed<<setprecision(3)<< "the area of your circle is: " << area<<endl;
			
			}else{
			cout<<"please enter a positive number";
			return(0);
			}
		}

		// calculates the area of the rectangle
		if(choice == 2){
			cout<< "What's the length and the width of the rectangle?"<<endl;
			cin>> length>>width;
			if(length >0 && width>0){
			area = (length* width);
			cout<<fixed<<setprecision(3)<< "the area of your rectangle is: " << area<<endl;
			
			}else{
			cout<<"please enter a positive number";
			return(0);
			}
		}

		//claculates the area of a triangle
		if(choice == 3){
			cout<< "What's the base and the height of your triangle?"<<endl;
			cin>> base>>height;
			if(base >0 && height>0){
			area = 0.5 * (base* height);
			cout<<fixed<<setprecision(3)<< "the area of your triangle is: " << area<<endl;
			
			}else{
			cout<<"please enter a positive number";
			return(0);
			}
		}

		//exits the program for you and tells you to have fun lol.
		if(choice == 4){
			cout<<"Have fun bud!"<<endl;
			return(0);
		}
	} else{
		cout<<"Enter a number less than 5!!!!"<<endl;
		return(0);
	}
}