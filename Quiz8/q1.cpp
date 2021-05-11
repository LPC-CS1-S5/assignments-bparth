#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int countNum(string &, string &);

int main(){


  string txt;
  ifstream ifs; 
  ifs.open("python.txt");
  while(1){
    ifs>> txt;
    if(ifs.eof()){
      break;
    }
    cout<< txt;
  }
  //ifs.close();
  
  
  string pattern = "th";

  cout<<countNum(pattern, txt)<<endl;
  return 0;


}

int countNum(string &pattern,string &txt){
  
  int M = pattern.length();
  int N = txt.length();
  int counter = 0;

  for(int i =0; i = N - M;i++){
    int j;
    for(j = 0; j < M; j++){
      if(txt[i+j] != pattern[j]){
        break;
      }
    }
    if(j == M){
      counter++;
      j=0;
    }
  }
  return counter;
}