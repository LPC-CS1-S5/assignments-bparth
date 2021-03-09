#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

int main(){

ifstream ifs; 
int num, sum, min, max, avg, count,length;
int arr[5];
ifs.open("data.txt");

while(ifs>>num){
  cout<< num<< " These numbers were read from the file"<<endl;
  sum += num;
  
  arr[count] += num;
  count++;
}
length = sizeof(arr)/sizeof(arr[0]);
max = arr[0];
min = arr[0];
for(int i = 0; i <= length; i++){
  if(arr[i]>max){
    max=arr[i];
  }
  if(arr[i]<min){
    min = arr[i];
  }
}
cout<<"Max number is: "<<max<<endl;
cout<<"Min number is: "<<min<<endl;
cout<<"The total count of numbers is: "<<count<<endl;
cout<<"The sum of all the numbers is: "<<sum<<endl;

avg = sum/count;
cout<<"The average of these "<<count<< " numbers is: "<<avg<<endl;

ifs.close();

}