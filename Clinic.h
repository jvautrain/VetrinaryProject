//*****************************************************************************
//	File:	Clinic.H
//	Author:	Joshua Vautrain and Chris Drope
//	Notes:	Header file for controller class	
//*****************************************************************************
#include <string>
#include <iostream>

#ifndef CLINIC_H
#define CLINIC_H

class Clinic
{
	public:
	
	//*****************************************************************************
	// Constructor
	Clinic();

	//*****************************************************************************
	// Destructor
	~Clinic();

	//*****************************************************************************
	// newCustomer adds new customer
	void newCustomer();

	//*****************************************************************************
	// editCustomer edits existing customer
	void editCustomer();

	//*****************************************************************************
	// closeAccount closes customer account
	void closeAccount();

	//*****************************************************************************
	// newPatient adds patient for a customer
	void newPatient();

	//*****************************************************************************
	// editPatient alters patient information
	void editPatient();

	//*****************************************************************************
	// newVisit creates a patient visit
	void newVisit();

	//*****************************************************************************
	// newBill creates a bill for patient visit
	void newBill();

	//*****************************************************************************
	// addTimeEntry creates a time Entry transaction
	void addTimeEntry();

	//*****************************************************************************
	// newEmployee adds a new employee
	void newEmployee();

	//*****************************************************************************
	// newRFID adds a new tag ffor a patient and sends it to the national db
	void newRFID();

	//****************************************************************************
	// terminateEmployee logs the employees termination
	void terminateEmployee();

	//****************************************************************************
	// newPayment logs a new payment for a Bill
	void newPayment();
};


#endif