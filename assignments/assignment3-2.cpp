#include <iostream>
#include <iomanip>

using namespace std;

int main(){
int m, f;
double pM, pF,totalKids;

cout << "How many males in the class?" <<endl;
cin >> m ;
cout << "How many females in the class?"<<endl;
cin >> f;

//calculat the percent
totalKids = m+f;
pM = (m/totalKids)* 100;
pF = (f/totalKids) * 100;

cout<< "Percent of males: " << pM << "%"<< endl << "Percent of female: " << pF << "%"<< endl;
}