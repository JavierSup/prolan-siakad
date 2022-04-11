#ifndef __MAHASISWA_HPP__
#define __MAHASISWA_HPP__


#include <iostream>
#include "include/person.hpp"

class mahasiswa : public person {
private:
	std::string nrp;
	std::string departemen;
	int tahunmasuk;
	int semesterke;
	int skslulus;
	float ipk;
	std::vector<float> ips;

public:
	mahasiswa(std::string id, std::string nama, int dd, int mm, int yy,int nomorhp, std::string alamat, std::string email,
					std::string nrp, std::string departemen, int tahunmasuk,int semesterke,int skslulus);

	void setnrp(std :: string nrp);
	std :: string getnrp();

	void setDepartemen(std :: string departemen);
	std :: string getDepartemen();

	void setTahunmasuk(int tahunmasuk);
	int getTahunmasuk();

	void setSemester(int semesterke);
	int getSemester();

	void setSKSLulus(int skslulus);
	int getSKSLulus();

	void hitungIPK();

	void setIPS(int semester, float ips);
	float getIPS(int semester);
	std::vector<float> getAllIPS();
};

#endif
