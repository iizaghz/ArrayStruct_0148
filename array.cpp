#include <iostream>
using namespace std;

//deklarasi array tanpa ukuran, wajib diisi data
int nilai[]={1,2,3};
//deklarasi array dengan ukuran, diidi daata awal
int skor[4]={12,24,48,64};
//deklarasi array dengan ukuran, tanpa nilai awal
string nama[3];

int main() {
    //menampilkan isi array pada index tertentu
    cout << "Tampilkan skor se 3 = " << skor[2] << endl;
    //mengisi array pada index tertentu
    skor[2] = 100;
    //menampilkan isi array pada index tertentu
    cout << "Tmapilkan skor ke 3" << skor[2] << endl;


}