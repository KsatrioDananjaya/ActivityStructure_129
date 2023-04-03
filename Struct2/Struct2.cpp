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

	Mahasiswa mhs;

	cout << "Masukkan NIM : ";
	cin >> mhs.nim;
	cout << "Masukkan Nama : ";
	cin >> mhs.nama;
	cout << "Alamat : " <<endl;
	cout << "\tMasukkan Desa : ";
	cin >> mhs.alamat.desa;
	cout << "\tMasukkan Kota : ";
	cin >> mhs.alamat.kota;
	cout << "Masukkan Umur : ";
	cin >> mhs.umur;

	cout << "\nNIM :" << mhs.nim;
	cout << "\nNama :" << mhs.nama;
	cout << "\nDesa :" << mhs.alamat.desa;
	cout << "\nKota :" << mhs.alamat.kota;
	cout << "\nUmur :" << mhs.umur;
}
