#ifndef __PERSON_HPP__
#define __PERSON_HPP__

#include <iostream>

class person {
private:
	std::string id;
	std::string nama;
	int dd, mm, yy;
	int nomorhp;
	std::string alamat;
	std::string email;

public:
	person(std::string id, std::string nama, int dd, int mm, int yy, int nomorhp, std::string alamat,std::string email);

	void setId(std::string id);
	std::string getId();

	void setNama(std::string nama);
	std::string getNama();

	void setEmail(std::string email);
	std::string getEmail();

	void setNomorHP(int nomorhp);
	int getNomorHP();

	void setAlamat(std::string alamat);
	std::string getAlamat();

	void setTglLahir(int dd, int mm, int yy);
	int getTglLahir();
	int getBulanLahir();
	int getTahunLahir();	
};


#endif
