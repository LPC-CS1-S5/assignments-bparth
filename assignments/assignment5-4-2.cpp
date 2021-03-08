#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

int main(){

ifstream ifs; 
int num, sum, min, max, avg;

ifs.open("data.txt");

while(ifs>>num){
cout<< num<< " These numbers were read from the file"<<endl;
}



ifs.close();

}