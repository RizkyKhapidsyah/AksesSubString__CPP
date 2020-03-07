#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main()
{
	cout << "========" << endl;
	cout << "CONTOH 1" << endl;
	cout << "========" << endl;

	string Kalimat_1("Saya Menyukai Pemrograman C++");
	string Kalimat_2("Saya Mempelajari Pemrograman C++");

	cout << "1: " << Kalimat_1 << endl;
	cout << "2: " << Kalimat_2 << endl << endl;

	cout << "========" << endl;
	cout << "CONTOH 2" << endl;
	cout << "========" << endl;
	
	// Subtring: Mengambil String di tengah-tengah kalimat
	// Format: substr(index, panjang)

	int iIndex, iLength;

	cout << "Masukkan Index (Mulai dari 0)  : "; cin >> iIndex;
	cout << "Masukkan Panjang               : "; cin >> iLength;

	puts("");

	if ((iIndex < 0 || iIndex > Kalimat_1.length()) || (iIndex < 0 || iIndex > Kalimat_2.length()))
	{
		cout << "Index Diluar Jangkauan" << endl;
	}
	else
	{
		if ((iLength < 0 || iLength > Kalimat_1.length()) || (iLength < 0 || iLength > Kalimat_2.length()))
		{
			cout << "Panjang Diluar Jangkauan" << endl;
		}
		else
		{
			cout << "Kata yang Anda pilih pada Kalimat 1 adalah    : " << Kalimat_1.substr(iIndex, iLength) << endl;
			cout << "Kata yang Anda pilih pada Kalimat 2 adalah    : " << Kalimat_2.substr(iIndex, iLength) << endl << endl;
		}
	}

	cout << "========" << endl;
	cout << "CONTOH 3" << endl;
	cout << "========" << endl;

	//Mendapatkan Index Posisi Dari SubString

	string iFind1, iFind2;

	cout << "Masukkan Kata Yang Ingin Didapatkan Indexnya Dari Kalimat 1  : "; cin >> iFind1;
	cout << "Masukkan Kata Yang Ingin Didapatkan Indexnya Dari Kalimat 2  : "; cin >> iFind2;

	puts("");

	cout << "Kalimat " << iFind1 << " berada pada index: " << Kalimat_1.find(iFind1) << endl;
	cout << "Kalimat " << iFind2 << " berada pada index: " << Kalimat_2.find(iFind2) << endl << endl;


	cout << "========" << endl;
	cout << "CONTOH 4" << endl;
	cout << "========" << endl;

	//Mendapatkan Index Dari Belakang, Posisi Dari SubString

	string rFind1, rFind2;

	cout << "Masukkan Kata Yang Ingin Didapatkan Indexnya Dari Kalimat 1 (Dari Belakang) : "; cin >> rFind1;
	cout << "Masukkan Kata Yang Ingin Didapatkan Indexnya Dari Kalimat 2 (Dari Belakang) : "; cin >> rFind2;

	puts("");

	cout << "Kalimat " << rFind1 << " berada pada index: " << Kalimat_1.rfind(rFind1) << endl;
	cout << "Kalimat " << rFind1 << " berada pada index: " << Kalimat_2.rfind(rFind1) << endl;
	
	_getch();
	return 0;
}