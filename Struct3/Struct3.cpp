#include <iostream>
#include <string>
using namespace std;

struct AlamatDetail {
	char desa [20];
	char kota [20];
};

struct Mahasiswa {
	char nim [12];
	char nama [20];
	AlamatDetail alamat;
	int umur;
};

int main() {

	Mahasiswa mhs[3];

	for (int i = 0; i < 3; i++)
	{
		cout << "Masukkan NIM : ";
		cin.getline(mhs[i].nim, 12);
		cout << "Masukkan Nama : ";
		cin.getline(mhs[i].nama, 20);
		cout << "Alamat : " << endl;
		cout << "\tMasukkan Desa : ";
		cin.getline(mhs[i].alamat.desa, 20);
		cout << "\tMasukkan Kota : ";
		cin.getline(mhs[i].alamat.kota, 20);
		cout << "Masukkan Umur : ";
		cin >> mhs[i].umur;
		cin.ignore(1);
	}
	for (int i = 0; i < 3; i++)
	{
		cout << "\nNIM :" << mhs[i].nim;
		cout << "\nNama :" << mhs[i].nama;
		cout << "\nDesa :" << mhs[i].alamat.desa;
		cout << "\nKota :" << mhs[i].alamat.kota;
		cout << "\nUmur :" << mhs[i].umur;
	}