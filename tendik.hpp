#ifndef __TENDIK_HPP__
#define __TENDIK_HPP__

#include <iostream>
#include "include/person.hpp"


class tendik : public person {
private:
	std::string npp;
	std::string unit;

public:
	tendik(std::string id, std::string nama, int dd, int mm, int yy,int nomorhp,
	 std::string npp, std::string unit, std::string  alamat,std::string email);

	void setUnit(std::string unit);
	std::string getUnit();	
	std::string getNPP();	
};

#endif
