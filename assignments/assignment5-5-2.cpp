#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

int main()
{
  ifstream ifs;
  double num1, num2, sum, avg;
  string str;
  ifs.open("516Parth.txt");


  while(ifs>>str){
    cout<<str;
  }
  

}