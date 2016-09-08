#ifndef EMPLOYEETYPE_H
#define EMPLOYEETYPE_H

#include "PersonType.h"

class employeeType : public PersonType
{
public:
	void setInfo(string, int, double,double,double, int);
	void setSalary(double, double, double);
	double getYearlySalary();
	void setDepartment(string);
	string getDepartment();
	void setCategory(char);
	char getCategory();
	void setID(int);
	int getID();
	void print();
	int getDepartmentID();
	double getHourlySalary();
	double getMonthlySalary();
	employeeType();
	employeeType(string, string, char, int, string, string, string, int, double, int);
	employeeType(string, string, char, int, string, string, string, int, int, double);
//	~employeeType();
private:
	string departmentName;
	int departmentID;
	double yearlySalary;
	char status;
	double monthlySalary;
	double hourlySalary;
	int employeeID;
};
void employeeType::setInfo(string depname, int id, double yearly, double monthly, double hourly, int empid)
{
	departmentName = depname;
	departmentID = id;
	yearlySalary = yearly;
	monthlySalary = monthly;
	hourlySalary = hourly;
	employeeID = empid;
}
void employeeType::setSalary(double yearly, double monthly, double hourly)
{
	yearlySalary = yearly;
	monthlySalary = monthly;
	hourlySalary = hourly;
}
double employeeType::getYearlySalary()
{
	return yearlySalary;
}
void employeeType::setDepartment(string department)
{
	departmentName = department;
}
string employeeType::getDepartment()
{
	return departmentName;
}
void employeeType::setCategory(char ch)
{
	status = ch;
}
char employeeType::getCategory()
{
	return status;
}
void employeeType::setID(int id)
{
	employeeID = id;
}
int employeeType::getID()
{
	return employeeID;
}
employeeType::employeeType(string first, string last, char boygirl, int years, string phone, string location, string depname, int depid, int empid, double hourly)
{
	PersonType::setInfo(first, last, boygirl, years, phone, location);
	departmentName = depname;
	departmentID = depid;
	employeeID = empid;
	hourlySalary = hourly;
}
employeeType::employeeType(string first, string last, char boygirl, int years, string phone, string location, string depname, int depid, double yearly, int empid)
{
	PersonType::setInfo(first, last, boygirl, years, phone, location);
	departmentName = depname;
	departmentID = depid;
	employeeID = empid;
	yearlySalary = yearly;
	
}


int employeeType::getDepartmentID()
{
	return departmentID;
}
double employeeType::getHourlySalary()
{
	return hourlySalary;
}

void employeeType::print()
{
	PersonType::print();
	cout << departmentName << "  " << departmentID << "  " << employeeID << "   ";
}
double employeeType::getMonthlySalary()
{
	return monthlySalary;
}
employeeType::employeeType()
{
	departmentName = " ";
	departmentID = 0;
	yearlySalary = 0;
	status = 'F';
	monthlySalary=0;
	hourlySalary = 0;
	employeeID = 0;
}
#endif