#include <iostream>
#include "include/person.hpp"


person::person(std::string id, std::string nama, int dd, int mm, int yy, int nomorhp, std::string alamat,std::string email)
		: id(id), nama(nama), dd(dd), mm(mm), yy(yy),nomorhp(nomorhp),alamat(alamat),email(email)
{
}

void person::setId(std::string id)
{
	this->id = id;
}

std::string person::getId() 
{
	return this->id;
}

void person::setNama(std::string nama)
{
	this->nama = nama;
}

std::string person::getNama()
{
	return this->nama;
}

void person::setAlamat(std::string alamat)
{
	this->alamat = alamat;
}

std::string person::getAlamat()
{
	return this->alamat;
}

void person::setEmail(std::string email)
{
	this->email = email;
}

std::string person::getEmail()
{
	return this->email;
}

void person::setNomorHP(int nomorhp)
{
	this->nomorhp = nomorhp;
}

int person::getNomorHP()
{
	return this->nomorhp;
}


void person::setTglLahir(int dd, int mm, int yy)
{
	this->dd = dd;
	this->mm = mm;
	this->yy = yy;
}

int person::getTglLahir()
{
	return this->dd;
}

int person::getBulanLahir()
{
	return this->mm;
}

int person::getTahunLahir()
{
	return this->yy;
}



