#include <iostream>
#include <fstream>
#include <cstring>
#include <cctype>
#include <sstream>
using namespace std;

const unsigned short N=5;
struct Scores{
  double sc[N];     
  string grade;
};

struct Grade{    
  string first;    
  string last;   
  string ssn;   
  Scores score;
};

Grade g; // makes the struct 

int main(){
  ifstream ifs;
  string readLine, l1;
  stringstream s;

  ifs.open("grades.txt");
  ifs >> readLine;
  s << readLine;

  getline(s, l1, ','); //reads each line from the text file
  g.first = l1;

  getline(s, l1, ','); //reads each line from the text file
  g.last = l1;

  getline(s, l1, ','); //reads each line from the text file
  g.ssn = stoi(l1);

  int count = 0;

  for(int i = 0; i<5;i++){ //loop to go through the array and add grades and make the count go up. 
    getline(s, l1, ',');
    g.score.sc[count];
    count++;
  }

  getline(s, l1, ',');
  g.score.grade;

  fstream f;
  f.open("grades.bin", ios::out | ios::binary); //opens the binary file so we can write things into it I think. 

  if(f.is_open()){
    f.write(reinterpret_cast<char*>(&g), N*sizeof(Grade));
    f.close();

  }else{
    cout<<"Error!!!"<<endl;
  }


}
