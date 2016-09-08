#include <iostream>
#include <fstream>
#include "studentType.h"
#include "partTimeEmployee.h"
#include "fullTimeEmployee.h"
#include "instructorType.h"
#include "PersonType.h"

using namespace std;

void menu()
{
	cout << "Select what you would like to do:" << endl;
	cout << "=====================================" << endl;
	cout << "  1: Add Records" << endl;
	cout << "  2: List Records" << endl;
	cout << "  3: Modify Records" << endl;
	cout << "  4: Delete Records" << endl;
	cout << "  5: Exit Program" << endl;
	cout << "=====================================" << endl;
	cout << endl;
	cout << "Select your choice: ";
	
}
int main()
{

	char choice;
	menu();
	cin >> choice;

	if (choice == '1')
	{

		char choice;
		cout << "1. Student or 2. Employee?";
		cin >> choice;
		cout << endl;


		if (choice == '1')
		{
			char firstname[10];
			char lastname[10];
			char gender;
			int age;
			char phone[15];
			char address[25];
			int studentid;
			int course;
			bool paid;
			char ans;
			int gradyear;

			cout << "Enter First Name: ";
			cin >> firstname;

			cout << "Enter Last Name: ";
			cin >> lastname;


			cout << "Enter gender (M/F): ";
			cin >> gender;

			cout << "Enter age: ";
			cin >> age;

			cout << "Enter phone number: ";
			cin >> phone;

			cout << "Enter address: ";
			cin >> address;

			cout << "Enter student ID: ";
			cin >> studentid;

			cout << "Enter number of coureses taken: ";
			cin >> course;

			cout << "Has tuition been paid (y/n) ?: ";
			cin >> ans;

			if (ans == 'y')
				paid = true;
			else if (ans == 'n')
				paid = false;

			cout << "What is the graduation year?: ";
			cin >> gradyear;


			studentType record(firstname, lastname, gender, age, phone, address, studentid, course, paid, gradyear);
			record.calculateGPA();
			ofstream file;
			file.open("Database.txt", ios::app);
			file << "S: " << " Name: " << record.getFirstName() << "  " << record.getLastName() << "  " << "Student ID: " << record.getid() << "   Age: " << record.getage() << "   Gender: " << record.getgender() << "  GPA: " << record.getGPA() << endl;
			file.close();

		}

		if (choice == '2')
		{
			char status;
			cout << "Select the number which corresponds to employment status (1 = Part-Time, 2 = Full-Time): ";
			cin >> status;
			char firstname[10];
			char lastname[10];
			char gender;
			int age;
			char phone[15];
			char address[25];
			char empdepartment[20];
			int depID;
			double monthly, hourly;
			int yearly;
			int empID;
			int bonus;

			cout << "Enter First Name: ";
			cin >> firstname;

			cout << "Enter Last Name: ";
			cin >> lastname;


			cout << "Enter gender (M/F): ";
			cin >> gender;

			cout << "Enter age: ";
			cin >> age;

			cout << "Enter phone number: ";
			cin >> phone;

			cout << "Enter address: ";
			cin >> address;

			cout << "What is employee department name?: ";
			cin >> empdepartment;

			cout << "What is department ID? : ";
			cin >> depID;

			cout << "What is employee ID? : ";
			cin >> empID;



			if (status == '1')
			{
				int hoursworked;

				cout << "How many hours worked?";
				cin >> hoursworked;
				cout << endl;

				cout << "What is hourly salary? : ";
				cin >> hourly;

				ofstream file;
				file.open("Database.txt", ios::app);
				partTimeEmployee record(firstname, lastname, gender, age, phone, address, empdepartment, depID, empID, hourly, hoursworked);
				file << "PE: " << "  Name: " << record.getFirstName() << " " << record.getLastName() << "   Age: " << record.getage() << "   Gender: " << record.getgender() << "  Department Name: " << record.getDepartment() << "   Wages: $" << record.calculatePay() << endl;

			}

			if (status == '2')
			{
				cout << "What is yearly pay?";
				cin >> yearly;

				cout << "What is yearly bonus?: ";
				cin >> bonus;

				fullTimeEmployee record(firstname, lastname, gender, age, phone, address, empdepartment, depID, yearly, empID, bonus);
				ofstream file;
				file.open("Database.txt", ios::app);
				file << "FE: " << "  Name: " << record.getFirstName() << "  " << record.getLastName() << "   Age: " << record.getage() << "   Gender: " << record.getgender() << "   Department Name: " << record.getDepartment() << "   Wages: $" << record.calculatePay() << endl;

			}


		}




	}

	if (choice == '2')
	{
		char sorted;
		cout << "Output List Sorted(1) or Unsorted(2)?: ";
		cin >> sorted;
		if (sorted == '1')
		{
			string data;
			ifstream file("database.txt");
			while (getline(file, data))
			{
				if (data[0] == 'S')
					cout << data << endl;
			}
			file.close();
			file.open("database.txt");
			while (getline(file, data))
			{
				if (data[0] == 'P')
					cout << data << endl;
			}
			file.close();
			file.open("database.txt");
			while (getline(file, data))
			{
				if (data[0] == 'F')
					cout << data << endl;
			}
			file.close();

		}


		if (sorted == '2')
		{
			string data;
			ifstream file("database.txt");
			while (getline(file, data))
			{
				cout << data << endl;;
			}
			file.close();
		}
	}

	if (choice == '3')
	{
		int line;
		cout << "which line number would you like to modify?: ";
		cin >> line;
		string str;
		ifstream file("database.txt");
		ofstream file2("tempdatabase2.txt");
		int count = 0;
		while (getline(file, str))
		{
			if (count + 1 != line)
				file2 << str << endl;
			if (count + 1 == line)
			{
				char choice;
				cout << "1. Student or 2. Employee?";
				cin >> choice;
				cout << endl;

				if (choice == '1')
				{
					char firstname[10];
					char lastname[10];
					char gender;
					int age;
					char phone[15];
					char address[15];
					int studentid;
					int course;
					bool paid;
					char ans;
					int gradyear;

					cout << "Enter First Name: ";
					cin >> firstname;

					cout << "Enter Last Name: ";
					cin >> lastname;


					cout << "Enter gender (M/F): ";
					cin >> gender;

					cout << "Enter age: ";
					cin >> age;

					cout << "Enter phone number: ";
					cin >> phone;

					cout << "Enter address: ";
					cin >> address;

					cout << "Enter student ID: ";
					cin >> studentid;

					cout << "Enter number of coureses taken: ";
					cin >> course;

					cout << "Has tuition been paid (y/n) ?: ";
					cin >> ans;

					if (ans == 'y')
						paid = true;
					else if (ans == 'n')
						paid = false;

					cout << "What is the graduation year?: ";
					cin >> gradyear;


					studentType record(firstname, lastname, gender, age, phone, address, studentid, course, paid, gradyear);
					record.calculateGPA();

					file2 << "S: " << " Name: " << record.getFirstName() << "  " << record.getLastName() << "  " << "Student ID: " << record.getid() << "   Age: " << record.getage() << "   Gender: " << record.getgender() << "  GPA: " << record.getGPA() << endl;


				}

				if (choice == '2')
				{
					char status;
					cout << "Select the number which corresponds to employment status (1 = Part-Time, 2 = Full-Time): ";
					cin >> status;
					char firstname[10];
					char lastname[10];
					char gender;
					int age;
					char phone[15];
					char address[15];
					char empdepartment[20];
					int depID;
					double monthly, hourly;
					int yearly;
					int empID;
					int bonus;

					cout << "Enter First Name: ";
					cin >> firstname;

					cout << "Enter Last Name: ";
					cin >> lastname;


					cout << "Enter gender (M/F): ";
					cin >> gender;

					cout << "Enter age: ";
					cin >> age;

					cout << "Enter phone number: ";
					cin >> phone;

					cout << "Enter address: ";
					cin >> address;

					cout << "What is employee department name?: ";
					cin >> empdepartment;

					cout << "What is department ID? : ";
					cin >> depID;

					cout << "What is employee ID? : ";
					cin >> empID;



					if (status == '1')
					{
						int hoursworked;

						cout << "How many hours worked?";
						cin >> hoursworked;
						cout << endl;

						cout << "What is hourly salary? : ";
						cin >> hourly;

						partTimeEmployee record(firstname, lastname, gender, age, phone, address, empdepartment, depID, empID, hourly, hoursworked);
						file2 << "PE: " << "  Name: " << record.getFirstName() << " " << record.getLastName() << "   Age: " << record.getage() << "   Gender: " << record.getgender() << "  Department Name: " << record.getDepartment() << "   Wages: $" << record.calculatePay() << endl;
					}
					if (status == '2')
					{
						cout << "What is yearly pay?";
						cin >> yearly;

						cout << "What is yearly bonus?: ";
						cin >> bonus;

						fullTimeEmployee record(firstname, lastname, gender, age, phone, address, empdepartment, depID, yearly, empID, bonus);

						file2 << "FE: " << "  Name: " << record.getFirstName() << "  " << record.getLastName() << "   Age: " << record.getage() << "   Gender: " << record.getgender() << "   Department Name: " << record.getDepartment() << "   Wages: $" << record.calculatePay() << endl;

					}

				}


			}
			count++;
		}
	}


	if (choice == '4')
	{
		int line;
		cout << "which line number would you like to delete?: ";
		cin >> line;
		string str;
		ifstream file("database.txt");
		ofstream file2("tempdatabase2.txt");
		int count = 0;
		while (getline(file, str))
		{
			if (count + 1 != line)
				file2 << str << endl;
			count++;
		}
	}

}
	