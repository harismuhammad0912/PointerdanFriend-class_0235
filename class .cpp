#include <iostream>
using namespace std;

class PersegiPanjang
{
public: // akses modifier
    int panjang, lebar;

public:

    void input()
    {
        cout << "Masukkan panjang : ";
        cin >> panjang;
        cout << "Masukkan lebar : ";
        cin >> lebar;


    }

    int luasPp (int a, int b)
    {
        return a* b;
    }

    Lingkaran ol;
};

class Lingkaran
{
    public:
        int jarijari;

    void input()
        {
            cout << "Masukkan jari-jari : ";
            cin >> jarijari;
        }

        int luaslingkaran(int p)
        {
            return 3.14 * p * p;
        }
};

int main()
{
    PersegiPanjang objekPp;
    Lingkaran ol;

    cout << "Masukkan panjangnya : ";
    cin >> objekPp.panjang;
    cout << "Masukkan lebarnya : ";
    cin >> objekPp.lebar;
    cout << "Luas Pesegi Panjang :" <<objekPp.luasPp(objekPp.panjang, objekPp.lebar) << endl;


};

