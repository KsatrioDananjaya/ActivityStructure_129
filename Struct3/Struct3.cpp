#include <iostream>
#include <string>
using namespace std;

struct AlamatDetail {
	string desa;
	string kota;
};

struct Mahasiswa {
	string nim;
	string nama;
	AlamatDetail alamat;
	int umur;
};

int main() {

	Mahasiswa mhs[3];

	cout << "Masukkan NIM : ";
	cin >> mhs[i].nim;
	cout << "Masukkan Nama : ";
	cin >> mhs[i].nama;
	cout << "Alamat : " << endl;
	cout << "\tMasukkan Desa : ";
	cin >> mhs[i].alamat.desa;
	cout << "\tMasukkan Kota : ";
	cin >> mhs[i].alamat.kota;
	cout << "Masukkan Umur : ";
	cin >> mhs[i].umur;
}