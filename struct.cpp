#include <iostream>
using namespace std;

struct mahasiswa {
   string nim;
   string nama;
   string alamat;
};

int main ()  {
    // membuat object struct mahasiswa 
    mahasiswa mhs;
// mengakses struct mahasiswa
mhs.nim = "2022014000";
mhs.nama = "Abra";
mhs.alamat = "Kasihan";

cout << "Masukkan NIM = " ;
cin >> mhs.nim;
cout << "Masukkan NAMA" ;
cin >> mhs.nama;
cout << "Masukkan ALAMAT" ;
cin >> mhs.alamat;

cout  << "NIM = " << mhs.nim << endl;
cout  << "NAMA" << mhs.nim << endl;
cout  << "ALAMAT" << mhs.nim << endl;

}