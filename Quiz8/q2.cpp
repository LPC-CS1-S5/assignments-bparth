#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

bool id(char[]);
bool len(char[]);
bool domain(char[]);

int main(){
  char mainEmail[20];

  cout<<"Enter your email: ";
  cin>>mainEmail;

  if(id(mainEmail)){
    cout<< "Nice your email starts with characters, not numbers"<<endl;
  }

  if(len(mainEmail)){
    cout<< "Nice, your email is between 6-14 letters"<<endl;
  }

  if(domain(mainEmail)){
    cout<<"Nice, you ended your email with a verified domain name!"<<endl;
  }

  if(id(mainEmail)&&len(mainEmail)&&domain(mainEmail)){
    cout<<"Nice your email id is perfect!"<<endl;
  }else{
    cout<< "Sorry bruh you aint valid!"<<endl;
  }
}

bool id(char mainEmail[]){
  if( isalpha(mainEmail[0])){
    return true;
  }else{
    cout<< "Sorry, have to start your email with letters!"<<endl;
    return false;
  }
}
bool len(char mainEmail[]){
  int i = 0;

  while(mainEmail[i] != '@'){
    i++;
  }
  if( (i > 5) && (i <15)){
    return true;
  }else{
    cout<< "Not valid, try again!"<<endl;
    return false;
  }

}
bool domain(char mainEmail[]){
  char domains[20] = "com edu gov net org";
  int len = (strlen(mainEmail));

  char *c;
  int i = len-1;

  do{
    if(mainEmail[i]== '.'){
      break;
    }
  }while((i--)>0);
  c = (strstr(domains,mainEmail+i+1));
  if(c){
    return true;

  }else{
    cout<<"did not pass the proper domains test!"<<endl;
    return false;
  }
  


}