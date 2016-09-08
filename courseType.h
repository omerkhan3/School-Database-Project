#include "studentType.h"

class courseType :public studentType
{
public:
	void setCourseInfo(string, int , int, string);
	void print();
	void setStudentList();
	int getCredits();
	int getCourseNumber();
	string getCourseName();
	courseType();
	
private:
	string courseName;
	int courseNo;
	int courseCredits;
	string *studentList;
	string instructor;
};

int courseType::getCourseNumber()
{
	return courseNo;
}

int courseType::getCredits()
{
	return courseCredits;
}

void courseType::print()
{
	studentType::print();
	cout << courseNo << " " << courseName << " " << instructor << *studentList << endl;
 }
void courseType::setCourseInfo(string name, int no, int credits, string instructorname)
{
	courseName = name;
	courseNo = no;
	courseCredits = credits;
	instructor = instructorname;
}
courseType::courseType()
{
	courseName = " ";
	courseNo = 0;
	courseCredits = 0;
	instructor = " ";
}
void courseType::setStudentList()
{
	int studentno;
	cout << "How many students?";
	cin >> studentno;

	string *studentList = new string[studentno];

	for (int i = 0; i < studentno; i++)
	{
		cin >> *studentList;
		studentList++;
	}
}