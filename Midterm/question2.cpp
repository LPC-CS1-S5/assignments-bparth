#include<iostream>
#include <fstream>
using namespace std;

int main(){
  ofstream ofs;
  ifstream ifs;
  string name;
  int score1, score2;

  ifs.open("students.txt");

  if(ifs.fail()){
    cerr<<"File can't be opened or doesn't exist"<<endl;
    exit(0);
  }
}