#ifndef INSTRUCTORTYPE_H
#define INTSTRUCTORTYPE_H
#include "PersonType.h"

class instructorType
{
public:
	instructorType();
	~instructorType();
	string getDepartment();
private:
	string department;
	string *courseList;
	string employeeCategory;
	bool student;
};
string instructorType::getDepartment()
{
	return department;
}

instructorType::instructorType()
{
	department = " ";
	*courseList = " ";
	employeeCategory = " ";
	student = false;
}

#endif

