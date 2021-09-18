#include <iostream>
using namespace std;

int rata (int a, int b)
{
	int hasil;
	hasil=(a+b)/2;
	return(hasil);
}

int main()
{
	int x, i;
	char huruf, y;
	cout<<"Jumlah Mahasiswa	: ";
	cin>>x;
	
	typedef struct {
		int nim;
		char nama[20]; 
		int uts;
		int uas;
	} data;
	data mahasiswa[x];
	
	cout<<endl;
	for (i=0;i<x;i++) {
		cout<<"NIM		: ";
		cin>>mahasiswa[i].nim;
		cout<<"Nama		: ";
		cin.ignore();
		cin.getline(mahasiswa[i].nama,sizeof(mahasiswa[i].nama));
		cout<<"Nilai UTS	: ";
		cin>>mahasiswa[i].uts;
		cout<<"Nilai UAS	: ";
		cin>>mahasiswa[i].uas;
		cout<<endl;
	}
	cout<<"---------------------------------";
	cout<<"\n	DATA MAHASISWA"<<endl<<endl;
	cout<<"---------------------------------"<<endl;
	for (i=0;i<x;i++) {
		cout<<"NIM		: "<<mahasiswa[i].nim<<endl;
		cout<<"Nama		: "<<mahasiswa[i].nama<<endl;
		cout<<"Nilai UTS	: "<<mahasiswa[i].uts<<endl;
		cout<<"Nilai UAS	: "<<mahasiswa[i].uas<<endl;
		cout<<"Rata-rata Nilai : "<<rata(mahasiswa[i].uts,mahasiswa[i].uas)<<endl;
	int rata=(mahasiswa[i].uts+mahasiswa[i].uas)/2;
	if (rata>=90) { huruf='A'; }
	else if ((rata)&&(rata<90)){ huruf='B'; }
	else if ((rata>=50)&&(rata<30)){ huruf='C'; }
	else if ((rata>=30)&&(rata<50)){ huruf='D'; }
	else if (rata<30) { huruf='E'; }
		cout<<"Nilai Huruf	: "<<huruf;
		cout<<endl;
		cout<<"---------------------------------"<<endl;
	}
	cout<<endl;
	cout<<"Cari data yang nilainya	: ";
	cin>>y;
	if (y==huruf) {
	for (i=0;i<x;i++)
	{
		cout<<"NIM		: "<<mahasiswa[i].nim<<endl;
		cout<<"Nama		: "<<mahasiswa[i].nama<<endl;
		cout<<"Nilai UTS	: "<<mahasiswa[i].uts<<endl;
		cout<<"Nilai UAS	: "<<mahasiswa[i].uas<<endl;
		cout<<"Rata-rata Nilai : "<<rata(mahasiswa[i].uts,mahasiswa[i].uas)<<endl;
	}
	cout<<endl;
	}
	else
	cout<<"Data tidak ditemukan";
}






