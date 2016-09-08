#include "PersonType.h"

class studentType:public PersonType
{
public:
	void setinfo(int, int, bool, int, int);
	void print();
	int getHoursEnrolled();
	double getGPA();
	void calculateGPA();
	int getid();
	double billingamount();
	void sortCourses();
	studentType();
	studentType(string, string, char, int, string, string, int, int, bool, int);

private:
	int studentID;
	int numberofCourses;
	bool isTuitionPaid;
	int yearGraduate;
	int *coursesEnrolled;
	double *coursesGrade;
	double GPA;
};
void studentType::setinfo(int id, int course, bool paid, int gradyear, int coursestaken)
{
	studentID = id;
	numberofCourses = course;
	isTuitionPaid = paid;
	gradyear = yearGraduate;
	*coursesEnrolled = coursestaken;
}
void studentType::print()
{
	PersonType::print();
	cout << studentID << " " << numberofCourses << " " << yearGraduate << " " << studentType::getGPA();
}

double studentType::getGPA()
{
	return GPA;
}
void studentType::calculateGPA()
{
	double *coursesGrade = new double[numberofCourses];
	double total= 0;

	for (int i = 0; i < numberofCourses; i++)
	{
		char grade;
		cout << "Enter Grade (A-F) " << i + 1 << ": ";
		cin >> grade;

		switch (grade)
		{
		case 'A':
			total = total + 4.0;
		case 'B':
			total = total + 3.0;
		case 'C': 
			total = total + 2.0;
		case 'D':
			total = total + 1.0;
		default:
			total = total + 0;

		}


	}

	GPA = total / numberofCourses;


}

int studentType::getid()
{
	return studentID;
}

double studentType::billingamount()
{
	if (isTuitionPaid == 1)
		return 0;
	else
		return 10000;
}
void sortCourses();
studentType::studentType()
{
	studentID = 0;
	numberofCourses = 0;
	isTuitionPaid = 0;
	yearGraduate = 0;
	*coursesEnrolled = 0;
	*coursesGrade = 0;
}
studentType::studentType(string first, string last, char boygirl, int years, string phone, string location, int id, int course, bool paid, int gradyear)
{
	PersonType::setInfo(first, last, boygirl, years, phone, location);
	studentID = id;
	numberofCourses = course;
	isTuitionPaid = paid;
	yearGraduate = gradyear;
}