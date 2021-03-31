#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int getRdnum();
int isGreater(int &);

int main(){
  int rdnum, i=0, j=0;
  ofstream ofs;

  ofs.open("numbers.txt");

  if(ofs.fail()){
    cerr<<"File can't be opened or doesn't exist"<<endl;
    exit(0);
  }

  while(i < 10){
    rdnum = getRdnum();
    j = isGreater(rdnum);

    if(j == 1){
      ofs<<rdnum<<endl;
    }
    i++;
  }
}

int getRdnum(){
  
  int rdnum;
  rdnum = rand() % 50;
  return(rdnum);
}

int isGreater(int &n){
  static int prec = 0;
  int a, b; 
  a = n;
  if(prec ==0){
    prec = n;
    return(0);
  }
  if(prec < n){
    
    prec = n ;
    return(1);
  }else{
    prec = n;
    return(0);
  }

}