#include <iostream>
#include <vector>
#include "include/mahasiswa.hpp"



mahasiswa::mahasiswa(std::string id, std::string nama, int dd, int mm, int yy, 
				std::string nrp, std::string departemen, int tahunmasuk)
		: person(id, nama, dd, mm, yy), nrp(nrp), departemen(departemen), tahunmasuk(tahunmasuk)
{
	this->ipk = 0.0;
	this->semesterke = 1;
	this->skslulus = 0;

	this->nrp = nrp;
	this->departemen = departemen;
	this->tahunmasuk = tahunmasuk;

	this->ips = std::vector<float>(14,0);
}

void mahasiswa::setSemester(int semesterke)
{
	this->semesterke = semesterke;
}

int mahasiswa::getSemester()
{
	return this->semesterke;
}

void mahasiswa::setSKSLulus(int skslulus)
{
	this->skslulus = skslulus;
}

int mahasiswa::getSKSLulus()
{
	return this->skslulus;
}

void mahasiswa::hitungIPK()
{
}

void mahasiswa::setIPS(int semester, float ips)
{
	// semester mulai dari 1
	if (semester < 15) {
		this->ips[semester-1] = ips;
		this->hitungIPK();
	}
}

float mahasiswa::getIPS(int semester)
{
	if (semester < 15)
		return this->ips[semester-1];

	return -1.0;
}

std::vector<float> mahasiswa::getAllIPS()
{
	return this->ips;
}

std::string mahasiswa::getDepartemen(){
	return this->departemen;
}

std::string mahasiswa::getNRP(){
	return this->nrp;
}

int mahasiswa::getTahunMasuk(){
	return this->tahunmasuk;
}

void mahasiswa::addMatkul(Matkul Matkul){
	this->mata_kuliah.push_back(Matkul);
	this->skslulus += Matkul.getSKSMatkul();	
}

void mahasiswa::showMatkul(){
    int len = this->mata_kuliah.size();
    for(int i=0;i<len;i++){
        cout << "Matkul ke " << i+1 << endl;
        cout << "Mata Kuliah    : " << this->mata_kuliah[i].getNamaMatkul() << endl;
        cout << "SKS            : " << this->mata_kuliah[i].getSKSMatkul() << endl;
        cout << "Score          : " << this->mata_kuliah[i].getScoreMatkul() << endl;
        cout << "---------------------------------------" << endl;
    }
}

