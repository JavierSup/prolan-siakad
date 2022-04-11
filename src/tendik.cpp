#include <iostream>
#include "include/tendik.hpp"


tendik::tendik(std::string id, std::string nama, int dd, int mm, int yy, int nomorhp, 
			std::string  alamat,std::string email,std::string npp, std::string unit)
		: person(id, nama, dd, mm, yy, nomorhp, alamat,email), npp(npp), unit(unit)
{

}

void tendik::setUnit(std::string unit)
{
	this->unit = unit;
}

std::string tendik::getUnit()
{
	return this->unit;
}


std::string tendik::getNPP()
{
	return this->npp;
}

