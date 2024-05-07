
#include <iostream>
using namespace std;

class siswa;
class orang
{
private:
    string nama;

public:
    void setNama(string pNama);
    friend class siswa;
};

class siswa
{
private:
    int id;

public:
    void setId(int pId);
    void displayALL(orang& a);
};

void siswa::displayALL(orang& a)
{
    cout << id << endl << a.nama;
}

int main()
{
    orang joko;
    joko.setNama("Joko Susilo");
    siswa joko_siswa;
    joko_siswa.setId(1);
    joko_siswa.displayALL(joko);
    return 0;
}

