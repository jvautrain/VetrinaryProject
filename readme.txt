--NOTES--

Address class has .cpp file just in case. Discuss whether we want it to have any behavior. Possibly re-implement as struct where needed or in Clinic file?

Assistant compensation: What are valid range?
Assistant promptAndStoreAssistantInfo: Discuss use, possibly cut and make robust constructor family instead?

promptAndStore - in general, seems to be just "populate object", perhaps reform?

//Customer-setCustomerInfo() pruned

//Address class, accessers/mutators. 
//if not, how to test boolean repeatedly for "getAddress" methods?



//power flickering, lost some code
//started on editcustomer in clinic, goal is: search by last name, return small set of customers, if more than one, show set of info and prompt for ID of correct one.
// remove that one from linked list
// modify, and re-add it.