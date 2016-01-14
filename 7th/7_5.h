/**
*Filename:
*Author:		Jacob
*/

#ifndef		7_4_H
#define		7_4_H

#include <string>

class Person {
	std::string name;
	std::string address;
public:
	const std::string getname() const { return name; }
	const std::string getaddress() const { return address; }
};

#endif
