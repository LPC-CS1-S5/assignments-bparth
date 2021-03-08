#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

int main()
{
    ofstream ofs;
    int N;
    int rdnum;

    unsigned seed = time(0);
    srand(seed); // srand(time(0));

    cout << "Enter the number of Random numbers :";
    cin >> N;
    ofs.open("data.txt");
    if(ofs.fail()){
      cerr<<"File failed to open";
      exit(0);
    }
    while (N-- > 0)
    {
        rdnum = rand() % 100;
        ofs << rdnum<<endl;
    }
    ofs.close();
}