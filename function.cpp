#include <iostream>
#include <string>
using namespace std;
int jumlah(int a, int b)
{
    int r;
    r = a + b;
    return(r);
}

int kurang(int c, int d)
{
    int k;
    k = c - d;
    return (k);
}

int kali(int e, int f)
{
    int kal;
    kal = e * f;
    return(kal);
}

int bagi(int g, int h)
{
    int bag;
    bag = g / h;
    return (bag);
}

int main ()
{
    int z, x, ngali, ngebagi, bil1, bil2, bil3, bil4, bil5, bil6, bil7, bil8;

//===============
    cout << "Masukkan Bilangan yang akan ditambah :" << endl;
    cout << "Masukkan bilangan pertama :";
    cin >> bil1;
    cout << "Masukkan bilangan kedua :";
    cin >> bil2;
    z = jumlah(bil1, bil2);
    cout << "Hasil penjumlahan dari " << bil1 << " + " << bil2 << " = " << z << endl;
    cout << endl;
    //
    cout << "Masukkan Bilangan yang akan dikurang :" << endl;
    cout << "Masukkan bilangan pertama :";
    cin >> bil3;
    cout << "Masukkan bilangan kedua :";
    cin >> bil4;
    x = kurang(bil3, bil4);
    cout << "Hasil pengurangan dari " << bil3 << " - " << bil4 << " = " << x << endl;
    cout << endl;
    //
    cout << "Masukkan Bilangan yang akan dikali :" << endl;
    cout << "Masukkan bilangan pertama :";
    cin >> bil5;
    cout << "Masukkan bilangan kedua :";
    cin >> bil6;
    ngali = kali(bil5, bil6);
    cout << "Hasil penjumlahan dari " << bil5 << " * " << bil6 << " = " << ngali << endl;
    cout << endl;
    //    
    cout << "Masukkan Bilangan yang akan dibagi :" << endl;
    cout << "Masukkan bilangan pertama :";
    cin >> bil7;
    cout << "Masukkan bilangan kedua :";
    cin >> bil8;
    ngebagi = bagi(bil7, bil8);
    cout << "Hasil pembagian dari " << bil7 << " / " << bil8 << " = " << z << endl;
    cout << endl;
    //
    return 0;

}