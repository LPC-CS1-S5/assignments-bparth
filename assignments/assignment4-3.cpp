#include <iostream>
#include <iomanip>
using namespace std;
int main(){

  // setting an integer
  int selection;

  //displays all the options that the user can input
  cout<<"Which formula do you want to see? \n\n";
  cout<<"1. Area of a circle\n";
  cout<<"2. Area of a rectangle\n";
  cout<<"3. Area of a cylinder\n";
  cout<<"4. None of the above!\n";

  //takes the user input and tries to match it with the statement they want
  cin>>selection;

  //switch case scenario instead of if/else to see what the user chooses.
switch (selection){
  case 1:
    cout<< "Pi times radius squared \n";
    break;
  case 2:
    cout<< "Base times Height \n";
    break;
  case 3:
    cout<<"Pi times radius squared times height \n";
    break;
  case 4:
    cout<< "Well okay then bye!";
    break;
  default:
    cout<<"Not good with numbers eh?";
    break;
}
}