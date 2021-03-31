#include <iostream>
using namespace std;

void inputValid(int &, int &);
int getList(int ,int );

int main(){
  int beg,end;

  cout<<"enter your 2 numbers: "<<endl;
  cin>>beg>>end;

  inputValid(beg, end);
}

void inputValid(int &a, int &b){
  if(a==b){
    getList(a, 100);
  } 
  if( a>b){
    getList(0, 100);
  }
  if(a<b){
    getList(a, b);
  }
}

int getList(int beg, int end){
  int i;
  while (beg <= end)
    {
        //flag = 0;
        for ( i = 2; i < beg ; i++)
        {
            if (beg % i == 0)
            {
                break;
            }
        }
        //if (flag)
        if (i != beg){
            //cout << beg << " is not a prime\n";
        }else{
            cout << beg << " is a prime number\n";
        }
        beg++;
    }
}