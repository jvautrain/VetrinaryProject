//*****************************************************************************
//	File:	Customer.H 
//	Author:	Joshua Vautrain and Chris Drope
//	Notes:	customer class
//*****************************************************************************
#include <string>

class Address;
class Employee;

#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer
{
private:
	static numCustomers = 0;
	std::string firstName;
	std::string lastName;
	std::string middleName;
	int customerID;
	Address address;
	std::string closeReason;
	std::string promptForPetType();
	void promptForCloseAccountReason();
public:
	Customer();
	bool promptForCustomerInfo();
	bool setFirstName(std::string);
	std::string getFirstname() const;
	bool setLastName(std::string);
	std::string getLastname() const;
	bool setMiddleName(std::string);
	std::string getMiddlename() const;
	bool setAddress(Address);
	Address getAddress() const;
	std::string promptForPetName();
	void editCustomer();
	void newPatient();
	void editPatient();
	void newVisit(Employee);
	void newBill();
	void newRFID();
	void newPayment();
};
#endif