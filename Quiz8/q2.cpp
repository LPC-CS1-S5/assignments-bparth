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
    "Nice your email id is perfect!"<<endl;
  }else{
    cout<< "Sorry bruh you aint valid!"<<endl;
  }
}

bool id(char mainMail[]){

}
bool len(char mainMail[]){

}
bool domain(char mainMail[]){
  
}