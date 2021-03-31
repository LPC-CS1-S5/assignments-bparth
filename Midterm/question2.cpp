#include<iostream>
#include <fstream>
using namespace std;

int main(){
  ofstream ofs;
  ifstream ifs;
  string name;
  int score1, score2, sum, stuCounter=0;
  float avg;

  ifs.open("students.txt");

  if(ifs.fail()){
    cerr<<"File can't be opened or doesn't exist"<<endl;
    exit(0);
  }

  for(int i = 0; i <10;i++){
    ifs>>name;
    ifs>>score1;
    ifs>>score2;
    sum = score1+score2;
    avg = sum/2;
    cout<<"Student name: "<< name<< ", Score 1:"<<score1<< ", Score 2:"<< score2<<", Sum: "<<sum<<", Average: "<<avg<<endl;
    if(avg>80){
      stuCounter += 1;
    }
    
  }
  cout<<"Number of students with average greater than 80: "<< stuCounter<<endl;

}
