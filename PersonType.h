#ifndef PERSONTYPE_H
#define PERSONTYPE_H

#include <iostream>
#include <string>
using namespace std;

class PersonType
{
public:
	virtual void print();
	virtual double calculatePay();
	void setInfo(string, string, char, int, string, string );
	string getFirstName();
	string getLastName();
	int getage();
	char getgender();
	string getphonenumber();
	string getaddress();
	PersonType();
	PersonType(string, string, char, int, string, string);
//	~PersonType();
private:
	string firstName;
	string lastName;
	char gender;
	int age;
	string phonenumber;
	string address;
	int weight;
	int height;
};
void PersonType::print()
{
	cout << firstName << " " << lastName << " " << age << " ";
}
double PersonType::calculatePay()
{
	return 0;
}
int PersonType::getage()
{
	return age;
}
char PersonType::getgender()
{
	return gender;
}
string PersonType::getphonenumber()
{
	return phonenumber;
}
string PersonType::getaddress()
{
	return address;
}
void PersonType::setInfo(string first, string last, char boygirl, int years, string phone, string location)
{
	firstName = first;
	lastName = last;
	gender = boygirl;
	age = years;
	phonenumber = phone;
	address = location;
}
string PersonType::getFirstName()
{
	return firstName;
}
string PersonType::getLastName()
{
	return lastName;
}
PersonType::PersonType()
{
	firstName = "";
	lastName = "";	
	gender = ' ';
	age = 0;
	phonenumber = "";
	address = " ";
	weight = 0;
	height = 0;
}

PersonType::PersonType(string first, string last, char boygirl, int years, string phone, string location)
	
{
	firstName = first;
	lastName = last;
	gender = boygirl;
	age = years;
	phonenumber = phone;
	address = location;
}
#endif