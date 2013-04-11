//*****************************************************************************
//	File:	Clinic.H
//	Author:	Joshua Vautrain and Chris Drope
//	Notes:	Header file for controller class	
//*****************************************************************************

#include <iostream>
#include "Clinic.h"
#include "Customer.h"
#include "Employee.h"


	//*****************************************************************************
	// Constructor
	Clinic::Clinic()
	{
		using namespace std;
		cout << "Clinic constructor called" << endl;

	}
	//*****************************************************************************
	// Destructor
	Clinic::~Clinic()
	{
		using namespace std;
		cout << "Clinic destructor called" << endl;
	}

	//*****************************************************************************
	// newCustomer adds new customer
	void Clinic::newCustomer()
	{
		Customer newCustomer;
		newCustomer.promptForCustomerInfo();
		customers.push_back(newCustomer);
	}

	//*****************************************************************************
	// editCustomer edits existing customer
	void Clinic::editCustomer()
	{
		using namespace std;
		Customer tempCustomer;
		string nameString;
		cout << "Enter customer last name: " << endl;
		cin >> nameString;
		tempCustomer.setLastName(nameString);
		
		
	}

	//*****************************************************************************
	// closeAccount closes customer account
	void Clinic::closeAccount()
	{
		using namespace std;
		cout << "Close customer Account" << endl;
	}

	//*****************************************************************************
	// newPatient adds patient for a customer
	void Clinic::newPatient()
	{
		using namespace std;
		cout << "Add new Patient" << endl;
	}

	//*****************************************************************************
	// editPatient alters patient information
	void Clinic::editPatient()
	{
		using namespace std;
		cout << "Edit existong patient" << endl;
	}

	//*****************************************************************************
	// newVisit creates a patient visit
	void Clinic::newVisit()
	{
		using namespace std;
		cout << "New patient visit" << endl;
	}

	//*****************************************************************************
	// newBill creates a bill for patient visit
	void Clinic::newBill()
	{
		using namespace std;
		cout << "New Bill" << endl;
	}

	//*****************************************************************************
	// addTimeEntry creates a time Entry transaction
	void Clinic::addTimeEntry()
	{
		using namespace std;
		cout << "New Time Entry" << endl;
	}

	//*****************************************************************************
	// newEmployee adds a new employee
	void Clinic::newEmployee()
	{
		using namespace std;
		cout << "New Employee" << endl;
	}

	//*****************************************************************************
	// newRFID adds a new tag ffor a patient and sends it to the national db
	void Clinic::newRFID()
	{
		using namespace std;
		cout << "New RFID" << endl;
	}

	//****************************************************************************
	// terminateEmployee logs the employees termination
	void Clinic::terminateEmployee()
	{
		using namespace std;
		cout << "Terminate Employee" << endl;
	}

	//****************************************************************************
	// newPayment logs a new payment for a Bill
	void Clinic::newPayment()
	{
		using namespace std;
		cout << "New Payment" << endl;
	}