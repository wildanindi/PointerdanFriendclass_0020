#include <iostream>
using namespace std;

class mahasiswa{

    public:
        int nim;
        void showNim()
        {
            cout << "No Induk = " << nim << endl;
        }
};

int main()
{
    mahasiswa *mhs = new mahasiswa{1}; // pointer object mhs
    mhs->nim = 2;
}