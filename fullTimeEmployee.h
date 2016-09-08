#ifndef FULLTIMEEMPLOYEE_H
#define FULLTIMEEMPLOYEE_H
#include "employeeType.h"

class fullTimeEmployee :public employeeType
{
public:
	void set(int,int);
	void setSalary(int);
	int getSalary();
	void setBonus(int);
	int getBonus();
	void print();
	double calculatePay();
	fullTimeEmployee();
	fullTimeEmployee(string, string, char, int, string, string, string, int, double, int, int);
	//~fullTimeEmployee();
private:
	int empSalary;
	int empBonus;
};
void fullTimeEmployee::set(int x, int y)
{
	empSalary = x;
	empBonus = y;
}
void fullTimeEmployee::setSalary(int x)
{
	empSalary = x;
}
int fullTimeEmployee::getSalary()
{
	return empSalary;
}
void fullTimeEmployee::setBonus(int y)
{
	empBonus = y;
}
int fullTimeEmployee::getBonus()
{
	return empBonus;
}
void fullTimeEmployee::print()
{
	employeeType::print();
	cout << "$" << empSalary << " ";
}
fullTimeEmployee::fullTimeEmployee()
{
	empBonus = 0;
	empSalary = 0;
}
double fullTimeEmployee::calculatePay()
{
	empSalary = empSalary + empBonus;
	return empSalary;
}
fullTimeEmployee::fullTimeEmployee(string first, string last, char boygirl, int years, string phone, string location, string depname, int depid, double yearly, int empid, int bonus)
	:employeeType(first, last, boygirl, years, phone, location, depname, depid, yearly, empid)
{
	empSalary = yearly;
	empBonus = bonus;
}
#endif