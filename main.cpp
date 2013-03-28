//*****************************************************************************
//	File:	Main.cpp 
//	Author:	Joshua Vautrain and Chris Drope
//	Notes:	This is the main entry point of the program.	
//*****************************************************************************
#include "Clinic.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <time.h>


//*****************************************************************************
// Prototypes

char getMenuEntry();
bool menuAction(Clinic&, char);

//*****************************************************************************
// Main program
int main()
{
	using namespace std;
	int returnValue;
	char selection;
	Clinic clinic;
	try 
	{

		do
		{
			selection=getMenuEntry();
			if (selection!='0')
			{
				menuAction(clinic, selection);
			}
		} while(selection!='0');
		returnValue=0;
	}
	catch (exception& e)
	{
		cout << "Error: " << e.what() << endl;
		returnValue=1;
	}
	return returnValue;
}
//*****************************************************************************
// getMenuEntry is the menu of the application and returns a selection from
// the menu to main for execution
char getMenuEntry()
{
	using namespace std;
    char select;

    system("cls");

	cout << "*****************************************************************************" << endl;
	cout << "*  Vetrinary Clinical System- Main Menu                                     *" << endl;
	cout << "*****************************************************************************" << endl ;
	cout << endl;
	cout << "A: Add new customer" << endl;
	cout << "B: Edit customer information" << endl;
	cout << "C: Add new patient" << endl;
	cout << "D: Edit patient information" << endl;
	cout << "E: Enter patient visit condition and care" << endl;
	cout << "F: Close customer account" << endl;
	cout << "G: Bill customer for visit" << endl;
	cout << "H: Enter employee time" << endl;
	cout << "I: Add new employee" << endl;
	cout << "J: Send pet RFID to national DB" << endl;
	cout << "K: Terminate employee" << endl;
	cout << "L: Receive customer payments" << endl;
	cout << endl;
	cout << "Enter Selection(0 to Exit):";
	cin >> select;
	cin.ignore();
	return toupper(select);
}

//*****************************************************************************
// getMenuEntry
bool menuAction(Clinic& c, char selection)
{
	using namespace std;
	bool retValue=true;
	switch(selection)
	{	case 'A': c.newCustomer();
			break;
		case 'B': c.editCustomer();
			break;
		case 'C': c.newPatient();
			break;
		case 'D': c.editPatient();
			break;
		case 'E': c.newVisit();
			break;
		case 'F': c.closeAccount();
			break;
        case 'G': c.newBill();
			break;
		case 'H': c.addTimeEntry();
			break;
		case 'I': c.newEmployee();
			break;
		case 'J': c.newRFID();
			break;
		case 'K': c.terminateEmployee();
			break;
		case 'L': c.newPayment();
			break;
	}
	char temp;
	cout << "ANy value to continue" << endl;
	cin >> temp;
	cin.ignore();
	return retValue;
}