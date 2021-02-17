// [Quiz 3-2] Programming Quiz

// PARTH BHAGWAT 
/*

Make a Program that generates three random numbers
and then calculates the summation and average.
display all the generated numbers, sum, and average with setprecision(5).

*/

#include <iostream> 
#include <iomanip>
using namespace std;

int main(){

//here we make our variable for double type where we have 3 diff numbers, a summation, and the average. 
double num1, num2, num3, avg, sum;

//here we generate 3 random numbers that are in 0-100 and have decimals range and we get different numbers every single run
srand(time(NULL));
num1 = (double)rand()/(RAND_MAX+1.0)*(100-1)+1;
num2 = (double)rand()/(RAND_MAX+1.0)*(100-1)+1;
num3 = (double)rand()/(RAND_MAX+1.0)*(100-1)+1;

cout<< "Your three random numbers are: " << num1 << ", "<< num2<<", "<<num3<< endl;

//this line of code adds the 3 random numbers 
sum = num1 + num2 + num3;

//this is the line to take the average of the sum of the three numbers 
avg = sum/3;

//this outputs the summation of the 3 numbers
cout<< fixed<<setprecision(5) << "The sum of the 3 numbers is: "<<sum <<endl; 

//this outputs the average of the 3 numbers
cout<< fixed<<setprecision(5) << "The average of the 3 numbers is: "<<avg <<endl;


//END OF CODE 

}