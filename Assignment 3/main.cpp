#include<iostream>
#include<fstream>
#include "Employee.h"
using namespace std;




int main() {
	
	Employee employee1;
	
    ifstream inEmployee("employee.txt", ios::in); 
	ofstream outEmployee("employee.txt", ios::out);
    

	if (!outEmployee)
	{
		cerr << "File couldn't be opened.\n";
		exit(1);
	}
	
	cout << "\nEnter employee's firstName, lastName, and age \n" << "Enter end-of-file to end input.\n ";



	while (cin >> employee1) { 

		outEmployee << employee1 << endl;
    }
	
	
	if (!inEmployee)
	{
		cerr << "File couldn't be opened.\n";
		exit(1);
	}
	while (inEmployee >> employee1) { 

		cout << employee1 << endl;
	}

	return 0;   
}