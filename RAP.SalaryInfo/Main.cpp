//RAFAEL PARRA 
//ASSIGNMENT 4 - SALARY
//March 3rd, 2023

#include<iostream>;
#include<conio.h>;
#include<string>;
using namespace std;




struct Employee {

	int Id;
	string FirstName;
	string LastName;
	double PayRate;
	int Hours;
};

double CalculatePay(Employee emp, double &total)
{
	double grossIndividual = emp.PayRate * emp.Hours;
	
	total += grossIndividual;
	
	return grossIndividual;
}

int main()
{
	char input = 'y';
	cout << "How many employees do you have?: ";
	
	while (input == 'y') 
	{
		int res = 0;
	
		cin >> res;

		Employee *employees = new Employee[res];
		double total = 0;

		for (int i = 0; i < res; i++)
		{
			cout << "Employee " <<i +1 << " Id: ";
			cin >> employees[i].Id;
			cout << "\n";

			cout << "Employee " << i + 1 << " Fist name: ";
			cin >> employees[i].FirstName;
			cout << "\n";

			cout << "Employee " << i + 1 << " Last name: ";
			cin >> employees[i].LastName;
			cout << "\n";

			cout << "Employee " << i + 1 << " Hours worked: ";
			cin >> employees[i].Hours;
			cout << "\n";

			cout << "Employee " << i + 1 << " Pay rate: ";
			cin >> employees[i].PayRate;
			cout << "\n";
;		}

		cout << "EMPLOYEES REPORT: \n";

		for (int i = 0; i < res; i++)
		{
			double GrossPay = CalculatePay(employees[i], total);

		
			cout << "Employee " << i + 1 << ": " << employees[i].FirstName <<" " << employees[i].LastName << ", Id = " << employees[i].Id << ", gross pay = " << GrossPay << "\n";

			

		}
		cout << "Total gross pay: " << total << "\n";
	}


	_getch();
	return 0;
}