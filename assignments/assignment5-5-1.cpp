#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

int main()
{
    ofstream ofs;
    double nStudents, score1, score2;
    string sName;

    cout << "Enter the number of students:" << endl;
    cin >> nStudents;
    ofs.open("516Parth.txt");
    if (ofs.fail())
    {
        cerr << "file failed to open!";
        exit(0);
    }

    for (int i = 1; i <= nStudents; i++)
    {
        //ofs<<nStudents<<endl;
        cout << "Enter the name of students:" << endl;
        cin >> sName;
        ofs << sName << " ";
        //for(int j = 0; j<2;j++){
        cout << "Enter 2 the students scores" << endl;
        cin >> score1 >> score2;
        ofs << score1 << " ";
        ofs << score2 << endl;
        //}
    }
    ofs.close();
}