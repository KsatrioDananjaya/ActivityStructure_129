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

	for (size_t i = 0; i < 3; i++)
	{

	}