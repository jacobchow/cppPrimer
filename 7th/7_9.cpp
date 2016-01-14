/**
*Filename:
*Author:		Jacob
*/

#ifndef		7_9_H
#define		7_9_H

#include <string>
#include <iostream>

class Person {
public:
	const std::string getname() const { return name; }
	const std::string getaddress() const { return address; }

	std::string name;
	std::string address;
};

std::istream& read(std::istream& is, Person& person)
{
	is >> person.name >> person.address;
	if(!is)  person = Person();
	return is ;
}

std::ostream& print(std::ostream& os, Person& person)
{
	os << person.name << " " << person.address;
	return os;
}

#endif
