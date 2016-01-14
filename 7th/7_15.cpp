/**
*Filename:
*Author:		Jacob
*/

#ifndef		7_15_H
#define		7_15_H

#include <string>
#include <iostream>

class Person;
std::istream& read(std::istream&, Person&);

class Person {
	friend std::istream& read(std::istream& is, Person& person);
	friend std::ostream& print(std::ostream& os, Person& person);
public:
	Person() = default;
	Person( const std::string sname, const std::string saddr )
		: name( sname ), address( saddr )
	{
	}
	Person(std::istream& is )
	{
		read(is, *this);
	}
	const std::string getname() const { return name; }
	const std::string getaddress() const { return address; }
private:
	std::string name;
	std::string address;
};

std::istream& read(std::istream& is, Person& person)
{
	is >> person.name >> person.address;
//	if(!is)  person = Person();
	return is ;
}
std::ostream& print(std::ostream& os, Person& person)
{
	os << person.name << " " << person.address;
	return os;
}

#endif
