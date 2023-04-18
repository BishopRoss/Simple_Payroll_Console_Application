//This program will display a payroll report for an employee
//Bishop Ross
//CIS170
//------------------------------------------------------------------


#include <iostream>
using namespace std;

void main()
{
	float grossPay, fedTax, FICA, stateTax;
	int employeeNum;
	double payTaken, netPay, stateTaxAmt, fedTaxAmt, FICA_amt;
	
	
	cout << "Welcome to the weekly payroll program, please enter the information below as prompted. \n";
	
	cout << "What is the employee number?";
	cin >> employeeNum;
	while (employeeNum < 0)//loop will validate if a valid employee # was entered
	{
		cout << "Please enter a postive value: ";
		cin >> employeeNum;
	}
	while (employeeNum >= 1)//if valid employee # is entered
	{
		cout << "Please enter the employee's weekly gross pay: ";
		cin >> grossPay;
		while (grossPay < 0)
		{
			cout << "Please enter a positive value: ";
			cin >> grossPay;
		}
		cout << "Please enter the state's tax rate: ";
		cin >> stateTax;
		while (stateTax < 0)
		{
			cout << "Please enter a positive value: ";
			cin >> stateTax;
		}
		cout << "Please enter the federal tax rate: ";
		cin >> fedTax;
		while (fedTax < 0)
		{
			cout << "Please enter a positive value: ";
			cin >> fedTax;
		}
		cout << "Please enter the FICA with-holdings: ";
		cin >> FICA;
		while (FICA < 0)
		{
			cout << "Please enter a positive value: ";
			cin >> FICA;
		}
		//calculations
		stateTaxAmt = grossPay * (stateTax / 100);
		fedTaxAmt = grossPay * (fedTax / 100);
		FICA_amt = grossPay * (FICA / 100);
		payTaken = stateTaxAmt + fedTaxAmt + FICA_amt;
		netPay = grossPay - payTaken;
		while (payTaken > grossPay)//loop that validates if grossPay is less than projected payTaken
		{
			cout << "Error, please enter user data again. \n";
			cout << "Please enter the employee's weekly gross pay: ";
			cin >> grossPay;
			while (grossPay < 0)
			{
				cout << "Please enter a positive value: ";
				cin >> grossPay;
			}
			cout << "Please enter the state's tax rate: ";
			cin >> stateTax;
			while (stateTax < 0)
			{
				cout << "Please enter a positive value: ";
				cin >> stateTax;
			}
			cout << "Please enter the federal tax rate: ";
			cin >> fedTax;
			while (fedTax < 0)
			{
				cout << "Please enter a positive value: ";
				cin >> fedTax;
			}
			cout << "Please enter the FICA with-holdings: ";
			cin >> FICA;
			while (FICA < 0)
			{
				cout << "Please enter a positive value: ";
				cin >> FICA;
			}
			stateTaxAmt = grossPay * (stateTax / 100);
			fedTaxAmt = grossPay * (fedTax / 100);
			FICA_amt = grossPay * (FICA / 100);
			payTaken = stateTaxAmt + fedTaxAmt + FICA_amt;
			netPay = grossPay - payTaken;

		}//end of payTaken and grossPay loop
		cout << " \n";
		cout << "Employee's State Tax amount is: " << "$" << stateTaxAmt << endl;
		cout << "Employee's Federal Tax amount is: " << "$" << fedTaxAmt << endl;
		cout << "Employee's FICA with-holdings amount is: " << "$" << FICA_amt << endl;
		cout << "Employee's total Net Pay is: " << "$" << netPay << endl;
		cout << " ";
		cout << "What is the employee number?";
		cin >> employeeNum;
		while (employeeNum < 0)
		{
			cout << "Please enter a postive value: ";
			cin >> employeeNum;
		}
	} 
	if (employeeNum == 0)
	{
		cout << "The program has been terminated. \n";
		system("pause");
	}
}