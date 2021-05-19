#include <iostream>
#include <fstream>

using namespace std; 

struct employee{
  int id;
  string name;
  int salary;
  string dept;
  string month;
  int day;
  int year;

};
int makeArray(employee []); //make arry afunction will read the data from text then make the struct array. 
void printRecord(const employee); // prints the stuff from the array that was made
void findDept(employee [], int); // to find all the boys in the computer department
void findSalary(employee [], int); // To find all the rich people

int main(){

}

int makeArray(employee e[]){
  ifstream ifs; // makes ifs
  int i; // i will use this later 
  ifs.open("employees.txt"); //opens the file
  if(!ifs){
    cout<<"Error opening the file, make sure you put the name right!!!!"<<endl;
    exit(0);
  } // incase you put in a name of a file that doesnt exist, mistakes happen. 

  i = 0;
  while(ifs>>e[i].id>> e[i].name >> e[i].salary >> e[i].dept >> e[i].month >> e[i].day >> e[i].year){
    i++; 
  } // this basically loops through the whole list and adds the elements to the array. 

}