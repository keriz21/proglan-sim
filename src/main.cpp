#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <stdlib.h>

#include "include/person.hpp"
#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"
#include "include/matkul.hpp"

using namespace std;

int main(int argc, char** argv)
{
	vector<mahasiswa> recMhs;
	vector<dosen> recDosen;
	vector<tendik> recTendik;
	vector<Matkul> recMatkul;

	int menu_terpilih;

	while(1) {
		cout << "Selamat datang di Universitas sumber makmur" << endl << endl;
		cout << "Data statistik:" << endl;
		cout << "  1. Jumlah Mahasiswa             : " << recMhs.size() << " mahasiswa" << endl;
		cout << "  2. Jumlah Dosen                 : " << recDosen.size() << " dosen" << endl;
		cout << "  3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " tendik" << endl;
		cout << endl;
		cout << "Menu: " << endl;
		cout << "  1. Tambah Mahasiswa" << endl;
		cout << "  2. Tambah Dosen" << endl;
		cout << "  3. Tambah Tenaga Kependidikan" << endl;
		cout << "  4. Tampilkan semua Mahasiswa" << endl;
		cout << "  5. Tampilkan semua Dosen" << endl;
		cout << "  6. Tampilkan semua Tenaga Kependidikan" << endl;
		cout << "  7. Tambah mata kuliah" << endl;
		cout << "  8. Tambah mata kuliah ke mahasiswa" << endl;
		cout << "  9. Tampilkan data mata kuliah" << endl;
		cout << " 10. Tampilkan data mata kuliah mahasiswa" << endl;
		cout << "-> Silahkan memilih salah satu: ";
		cin >> menu_terpilih;
		system("cls");

		switch (menu_terpilih) {
			case 1:
			{
				int dd, mm, yyyy, tahun_masuk;
				string id, nama, nrp, departemen;

				int n;
				n = recMhs.size() + 1;
				stringstream ss;
				ss << n;
				id = ss.str();


				cout << "masukkan nama ";
				cin.ignore();
				getline(cin, nama);

				cout << "masukkan tanggal lahir : ";
				cin >> dd;

				cout << "masukkan bulan lahir : ";
				cin >> mm;

				cout << "masukktan tahun lahir : ";
				cin >> yyyy;

				cout << "masukkan nrp : ";
				cin >> nrp;

				cout << "masukkan departemen : ";
				cin.ignore();
				getline(cin,departemen);

				cout << "masukkan tahun masuk : ";
				cin >> tahun_masuk;

				mahasiswa mhs(id, nama, dd, mm, yyyy, nrp, departemen, tahun_masuk);
				recMhs.push_back(mhs);
			}
				break;
			case 2:
			{
				int dd, mm, yyyy, pendidikan;
				string id, nama, npp, departemen;

				int n;
				n = recMhs.size() + 1;
				stringstream ss;
				ss << n;
				id = ss.str();


				cout << "masukkan nama ";
				cin.ignore();
				getline(cin, nama);

				cout << "masukkan tanggal lahir : ";
				cin >> dd;

				cout << "masukkan bulan lahir : ";
				cin >> mm;

				cout << "masukktan tahun lahir : ";
				cin >> yyyy;

				cout << "masukkan npp : ";
				cin >> npp;

				cout << "masukkan departemen : ";
				cin.ignore();
				getline(cin,departemen);

				cout << "masukkan pendidikan : ";
				cin >> pendidikan;

				dosen Dosen(id, nama, dd, mm, yyyy, npp, departemen, pendidikan);
				recDosen.push_back(Dosen);
			}
				break;
			case 3:
			{
				int dd, mm, yyyy;
				string id, nama, npp, departemen, unit;

				int n;
				n = recTendik.size() + 1;
				stringstream ss;
				ss << n;
				id = ss.str();


				cout << "masukkan nama ";
				cin.ignore();
				getline(cin, nama);

				cout << "masukkan tanggal lahir : ";
				cin >> dd;

				cout << "masukkan bulan lahir : ";
				cin >> mm;

				cout << "masukktan tahun lahir : ";
				cin >> yyyy;

				cout << "masukkan npp : ";
				cin >> npp;

				cout << "masukkan departemen : ";
				cin.ignore();
				getline(cin,departemen);

				cout << "masukkan unit : ";
				cin.ignore();
				getline(cin,unit);

				tendik Tendik(id, nama, dd, mm, yyyy, npp, unit);
				recTendik.push_back(Tendik);
			}
				break;
			case 4:
			{
				int len = recMhs.size();
				for(int i = 0;i<len;i++){
					cout << i+1 << endl;
					cout << "Nama Mahasiswa: " << recMhs[i].getNama() << endl;
					cout << "Tanggal Lahir : " << recMhs[i].getTglLahir() << "/" << recMhs[i].getBulanLahir() << "/" << recMhs[i].getTahunLahir() << endl;
					cout << "Departemen		: " << recMhs[i].getDepartemen() << endl;
					cout << "NRP			: " << recMhs[i].getNRP() << endl;
					cout << "SKS			: " << recMhs[i].getSKSLulus() << endl;
					cout << "Angkatan		: " << recMhs[i].getTahunMasuk() << endl;

				}
			}
				break;
			case 5:
			{
				int len = recDosen.size();
				for(int i = 0;i<len;i++){
					cout << i+1 << endl;
					cout << "Nama Dosen: " << recDosen[i].getNama() << endl;
					cout << "Tanggal Lahir : " << recDosen[i].getTglLahir() << "/" << recDosen[i].getBulanLahir() << "/" << recDosen[i].getTahunLahir() << endl;
					cout << "Departemen		: " << recDosen[i].getDepartemen() << endl;
					cout << "NPP			: " << recDosen[i].getNPP() << endl;
				}
			}
				break;
			case 6:
			{
				int len = recTendik.size();
				for(int i = 0;i<len;i++){
					cout << i+1 << endl;
					cout << "Nama Dosen: " << recTendik[i].getNama() << endl;
					cout << "Tanggal Lahir : " << recTendik[i].getTglLahir() << "/" << recTendik[i].getBulanLahir() << "/" << recTendik[i].getTahunLahir() << endl;
					cout << "Unit			: " << recTendik[i].getUnit() << endl;
					cout << "NPP			: " << recTendik[i].getNPP() << endl;
				}
			}
				break;
			case 7:
			{
				string mata_kuliah;
				int sks;
				cout << "Masukkan Nama Mata kuliah	: ";
				cin.ignore();
				getline(cin,mata_kuliah);
				cout << "Masukkan jumlah SKS : ";
				cin >> sks;
				Matkul mkl(mata_kuliah,sks);
				recMatkul.push_back(mkl);
			}
			break;
			case 8:
			{
				cout << "MENAMBAHKAN MATA KULIAH KE MAHASISWA " << endl;
				string nrp;
				cout << "Masukkan NRP mahasiswa : ";
				cin >> nrp;
				int len = recMhs.size();
				int index;
				bool ketemu = false;
				for(int i=0;i<len;i++){
					if(nrp == recMhs[i].getNRP()){
						index = i;
						ketemu = true;
					}
				}
				if(ketemu){
					cout << "TAMPILKAN DATA MATA KULIAH" << endl;
					cout << "Nama Mahasiswa : " << recMhs[index].getNama() << endl;
					cout << "Tanggal Lahir  : " << recMhs[index].getTglLahir() << "/" << recMhs[index].getBulanLahir() << "/" << recMhs[index].getTahunLahir() << endl;
					cout << "Departemen		: " << recMhs[index].getDepartemen() << endl;
					cout << "NRP			: " << recMhs[index].getNRP() << endl;
					cout << "SKS			: " << recMhs[index].getSKSLulus() << endl;
					cout << "Angkatan		: " << recMhs[index].getTahunMasuk() << endl;
					cout << endl;
					cout << "---------------------------------------" << endl;
					cout << endl;

					int n = recMatkul.size();
					for(int i=0;i<n;i++){
						cout << "mata kuliah ke : " << i << endl;
						cout << "Mata Kuliah 	: " << recMatkul[i].getNamaMatkul() << endl;
						cout << "SKS			: " << recMatkul[i].getSKSMatkul() << endl;
						cout << "---------------------------------------" << endl;
					}
					int pilihan_matakuliah;
					cout << "Silahkan Pilih mata kuliah (pilih indexnya aja) : ";
					cin >> pilihan_matakuliah;
					recMhs[index].addMatkul(recMatkul[pilihan_matakuliah]);

				} else {
					cout << "MAAF DATA MAHASISWA TIDAK DITEMUKAN" << endl;
				}
			}
			break;

			case 9:
			{
				int n = recMatkul.size();
				for(int i=0;i<n;i++){
					cout << "mata kuliah ke : " << i << endl;
					cout << "Mata Kuliah 	: " << recMatkul[i].getNamaMatkul() << endl;
					cout << "SKS			: " << recMatkul[i].getSKSMatkul() << endl;
					cout << "---------------------------------------" << endl;
				}
			}
			break;

			case 10:
			{
				cout << "MENAMPILKAN MATA KULIAH MAHASISWA " << endl;
				string nrp;
				cout << "Masukkan NRP mahasiswa : ";
				cin >> nrp;
				int len = recMhs.size();
				int index;
				bool ketemu = false;
				for(int i=0;i<len;i++){
					if(nrp == recMhs[i].getNRP()){
						index = i;
						ketemu = true;
					}
				}
				if(ketemu){
					cout << "TAMPILKAN DATA MATA KULIAH" << endl;
					cout << "Nama Mahasiswa : " << recMhs[index].getNama() << endl;
					cout << "Tanggal Lahir  : " << recMhs[index].getTglLahir() << "/" << recMhs[index].getBulanLahir() << "/" << recMhs[index].getTahunLahir() << endl;
					cout << "Departemen		: " << recMhs[index].getDepartemen() << endl;
					cout << "NRP			: " << recMhs[index].getNRP() << endl;
					cout << "SKS			: " << recMhs[index].getSKSLulus() << endl;
					cout << "Angkatan		: " << recMhs[index].getTahunMasuk() << endl;
					cout << endl;
					cout << "---------------------------------------" << endl;
					cout << endl;
					recMhs[index].showMatkul();
				} else {
					cout << "MAAF DATA MAHASISWA TIDAK DITEMUKAN" << endl;
				}
			}
		}
	}

	return 0;
}
