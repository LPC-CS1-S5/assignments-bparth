#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

int main(){

  //sets the ofstream and all the necessary variables that we need to input in the text file.
  ofstream ofs;
  int num,id;
  string name, dept;
  double salary;

  //asks for the number of employees 
  cout<<"Enter the number of employees "<<endl;
  cin>> num;
  ///opens the file using the file name
  ofs.open("employee.txt");
  //checks for file opening error
  if(ofs.fail()){
    cerr<<"File cant be opened or doesnt exist";
    exit(0);
  }

  for(int i = 1;i<= num; i++){
    cout<<"What is the employee id? "<< endl;
    cin>> id;    
    cout<< "What the name of the employee?"<<endl;
    cin>>name;
    cout<< "Enter the department name"<<endl;
    cin>>dept;
    cout<<"Enter the salary"<<endl;
    cin>>salary;

    ofs<< id<<" "<<name <<" " << dept<<" "<< salary << " "<<endl;    
    
  }
  ofs.close();



}