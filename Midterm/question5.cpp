#include <iostream>
#include <fstream>

using namespace std;
void getInput(int &, int &);
int isSame(int, int);
int intDivision(int,int);
void fileWrite(ofstream &, int);

int main(){
  int n1, n2, result=0;
  ofstream ofs;

  ofs.open("question5.txt");
  
  while(1){
    getInput(n1,n2);
    //n2 = getInput();
    if(isSame(n1, n2)){
      break;
    }
    result = intDivision(n1, n2);
    fileWrite(ofs, result);
  }
}

void getInput(int &a, int &b){
  int num, num2;
  cout<<"enter 2 numbers: "<<endl;
  cin>>num>>num2;
  

}
int isSame(int a, int b){
  if(a==b){
    return 1;
  }else{
    return 0;
    }
}
int intDivision(int a ,int b){
  int div=0;
  if(a>b){
    div = a/b;
  }else{
    div =b/a;
  }
}
void fileWrite(ofstream &ofs, int a){
  ofs<<a<<endl;


}

