#include <iostream>
using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    string alamat;
    string umur;
};
int main() {
    Mahasiswa mhs;
    cout << "Nomor Mahasiswa : ";
    cin >> mhs, nim;
    cout << "Nama Mahasiswa : ";
    cin >> mhs.nama;
    cout << "Alanat Mahasiswa : ";
    cin >> mhs.alamat;
    cout << "umur mahasiswa : ";
    cin >> mhs.umur;

    cout << endl;
    cou << "\n Nim : " << mhs.nim;
    cout << "\n Nama : " << mhs.nama;
    cout << "\n Alamat : " << mhs.alamat;
    cout << "\n Umur : " << mhs.umur;
}