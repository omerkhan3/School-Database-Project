#ifndef PARTTIMEEMPLOYEE_H
#define PARTTIMEEMPLOYEE_H

#include "employeeType.h"


class partTimeEmployee :public employeeType
{
public:
	partTimeEmployee();
	partTimeEmployee(string, string, char, int, string, string, string, int, int, double, int);
	//~partTimeEmployee();
	void print();
	void setNameRateHours();
	double calculatePay();
	double getPay();
private:
	int hoursworked;
	double payrate;
	double pay;
};
partTimeEmployee::partTimeEmployee(string first, string last, char boygirl, int years, string phone, string location, string depname, int depid, int empid, double hourly, int nohours)
	:employeeType(first, last, boygirl, years, phone, location, depname, depid, empid, hourly)
{
	hoursworked = nohours;
	payrate = hourly;
}
void partTimeEmployee::print()
{
	employeeType::print();
	cout << "$" << calculatePay() << "  ";
}
double partTimeEmployee::calculatePay()
{
	pay = hoursworked * payrate;
	return pay;
}

#endif