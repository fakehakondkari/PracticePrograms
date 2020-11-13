/*You need to design a class structure referring to the following details.
The Payment Gateway companies make use of APIs offered by the Credit Card companies. There are two main card types which are offered to the customers are Master and Visa. Although the cards offer different facilities but the API methods called by the Payment Gateway companies are standardized (thus need to have same name and parameters but can have different processing details). However the methods for customer dealings are all specific to the card types this means they can differ in their name and numbers for individual card types.
You need to make the four classes as follows
1. PaymentGateway - The class uses the methods offerred by CreditCard class while they interact with customers.
2. CreditCard : It offers four pure virtual methods – cardAuthent(), getInvDetails(), processInvoices(), UpdateAccount()
3. MasterCard : Inherits CreditCard class
4. VisaCard: Inherits CreditCard class
You are supposed to make only the class structures and successfully compile them. None of the methods need to have any details of actual processing (methods details may be highly complicated).
*/

V=#include <iostream>
using namespace std;

class CreditCard
{
      public :
      // Virual methods
      virtual int cardAuthent() = 0; 
      // Virtual method dealing with card authentication
      virtual int getInvDetails() = 0; // Virtual method to get the invoice details
      virtual int processInvoice() = 0; // Virtual method for processing invoices
      virtual int updateAccount() = 0; // Virtual method for updating customer account

};

class MasterCard : public CreditCard
{
      private :
      int cardNum;
      int clientId;
      char custName[100];
      char custContact[100];
     

      public :
      // Concrete Classes from Virtual classes
      int cardAuthent() // overrides parent method and makes it concrete
      {
               // implements Master card's way of card authentication
      }
      int getInvDetails() // overrides parent method and makes it concrete
      {
              // implements Master card's way of collecting invoice details
       }
      int processInvoice() // overrides parent method and makes it concrete
      {
             // implements Master card's way of processing invoice data
      }
      int updateAccount() // overrides parent method and makes it concrete
      {
            // implements Master card's way of updating card account
      }

      // Master card's own methods
      void issueCard()
      {
       }
      void removeCard()
     {
      } 

};

class VisaCard
{ 
	private :
	int cardNumber;
	int clientIdent;
	char customerName[100];
	char customerContact[100];
	public :
	// Concrete Classes from Virtual classes
	int cardAuthent() // overrides parent method and makes it concrete
	{
		// implements Visa card's way of card authentication
	}
	int getInvDetails() // overrides parent method and makes it concrete
	{
		// implements Visa card's way of collecting invoice details
	}
	int processInvoice() // overrides parent method and makes it concrete
	{
		// implements Visa card's way of processing invoice data
	}
	int updateAccount() // overrides parent method and makes it concrete
	{
		// implements Visa card's way of updating card account
	}
	// Visa card's own methods
	void createCard()
	{
	}
	void deleteCard()
	{
	}

};

class PaymentGateway // Remember Payment gateway is a separate company which process cards
{
	private :
	int customerId;
	int customerName;
	int cutomerAddress;
	int customerBalance;

	public :
	// Paymentgateways own set of processes
	void createCustomer()
	{
		// Payment gateways track their own customers such as the websites that 		use their services
	}
	void deleteCustomer()
	{
		// Payment gateways delete their customers
	}	
	int customerAuthenticate()
	{
		//if customer authentication successfull then
		return 1;
		// else
		// return 0;
	}
	int processMaster() // Method to process a Master card for a transaction
	{
		if (customerAuthenticate()) 
		// Payment Gateways own authentication process

		{
			MasterCard m;
			m.cardAuthent();
			m.getInvDetails();
			m.processInvoice();
			m.updateAccount();

		}
	}
	int processVisa() // Method to process a Visa card for a transaction
	{
		if (customerAuthenticate()) 
		// Payment Gateways own authentication process
		{	
			VisaCard v;
			v.cardAuthent();
			v.getInvDetails();
			v.processInvoice();
			v.updateAccount();

		}
	}

};
int main()
{
	return 0;
}
