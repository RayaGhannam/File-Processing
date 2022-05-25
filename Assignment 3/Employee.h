#pragma once
#include<iostream>
#include<fstream> 
#include <iomanip>
using namespace std;

class Employee {
	friend ostream& operator<<(ostream&, const Employee&);
	friend istream& operator>>(istream&, Employee&); 
	 
private: 
	string firstName;
	string lastName;
	int age;

public:
	Employee(string, string, int);
	void setfirstName(string);
	string getfirstName(string) { return firstName; };
	void setlastName(string);
	string getlastName(string) { return lastName; } ;
	int getAge(int) { return age; }; 
	void setAge(int);
	
};
Employee::Employee(string s1 = " ", string s2 = " ", int a = 0) { 

	setfirstName(s1);
	setlastName(s2);
	setAge(a);

}
void Employee::setfirstName(string sf) { firstName = sf; } 

void Employee::setlastName(string sl) { lastName = sl; } 

void Employee::setAge(int a) {

	age = ( a > 20 ? a : 21 );

}

ostream& operator<<(ostream& output, const Employee& e) {
	output << setw(15) << e.firstName << setw(15) << e.lastName << setw(8) << e.age << endl; 
	return output;
 
}
istream& operator>>(istream& input, Employee& e) {
	int a; 
	string s1, s2;
	input >> setw(15) >> s1 >> setw(15) >> s2 >> setw(8) >> a;
	e.setfirstName(s1);
	e.setlastName(s2);
	e.setAge(a);
	return input;

}