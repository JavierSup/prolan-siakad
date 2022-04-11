#include <iostream>

#include "include/dosen.hpp"


dosen::dosen(std::string id, std::string nama, int dd, int mm, int yy, int nomorhp,
		 std::string npp, std::string departemen, int pendidikan,std::string  alamat,std::string email)
		: person(id, nama, dd, mm, yy,nomorhp,alamat,email), npp(npp), departemen(departemen), pendidikan(pendidikan)
{
}

void dosen::setPendidikan(int pendidikan)
{
	this->pendidikan = pendidikan;
}

int dosen::getPendidikan()
{
	return this->pendidikan;
}


std::string dosen::getnpp()
{
	return this->npp;
}

std :: string dosen::getDepartemen()
{
	return this->departemen;
}