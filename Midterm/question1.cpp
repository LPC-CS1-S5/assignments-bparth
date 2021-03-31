#include <iostream>
using namespace std;

int main(){
  const int N =5, M = 5;
  int i, j,counter=0;

  for(i = 0; i<N;i++){
    for(j=i;j<M-i;j++){
      cout<<"( "<< i <<", "<< j <<" )";
      
    }
    cout<<endl;
    counter +=1;
  }
  cout<<counter<<endl;
}