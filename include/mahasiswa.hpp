#ifndef __MAHASISWA_HPP__
#define __MAHASISWA_HPP__


#include <iostream>
#include "include/person.hpp"
#include "include/matkul.hpp"

class mahasiswa : public person {
private:
	std::string nrp;
	std::string departemen;
	int tahunmasuk;
	int semesterke;
	int skslulus;
	float ipk;
	std::vector<float> ips;
	std::vector<Matkul> mata_kuliah;

public:
	mahasiswa(std::string id, std::string nama, int dd, int mm, int yy,
					std::string nrp, std::string departemen, int tahunmasuk);

	void setSemester(int semesterke);
	int getSemester();

	std::string getDepartemen();
	std::string getNRP();
	int getTahunMasuk();

	void setSKSLulus(int skslulus);
	int getSKSLulus();

	void hitungIPK();

	void setIPS(int semester, float ips);
	float getIPS(int semester);
	std::vector<float> getAllIPS();

	void addMatkul(Matkul matkul);
	void showMatkul();
};

#endif
