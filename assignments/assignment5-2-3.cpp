#include <iostream>

using namespace std;
int main(){
  for(int i = 0; i <= 2; i++){
    for(int j = 0; j<=i;j++){
      cout<< i <<", "<< j<<endl;
    }
  }
  cout<<"Next loop's results\n";
  for(int i = 0; i <= 2; i++){
    for(int j = 0; j<=i;j++){
      cout<< j <<", "<< i<<endl;
    }
  }
  cout<<"Next loop's results\n";
  for(int i = 2; i >= 0; i--){
    for(int j = 0; j<=i;j++){
      cout<< j <<", "<< i<<endl;
    }
  }
}